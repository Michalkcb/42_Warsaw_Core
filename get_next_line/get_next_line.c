/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:45:44 by mbany             #+#    #+#             */
/*   Updated: 2024/05/03 15:20:11 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

//start code
static char	*read_and_return(int fd, char *buf, char *backup)
{
	int		read_line;
	char	*char_temp;

	read_line = 1;
	while (read_line != '\0')
	{
		read_line = read(fd, buf, BUFFER_SIZE);
		if (read_line == -1)
			return (0);
		else if (read_line == 0)
			break ;
		buf[read_line] = '\0';
		if (!backup)
			backup = ft_strjoin("","");
		char_temp = backup;
		backup = ft_strjoin(char_temp, buf);
		free(char_temp);
		if (ft_strchr(buf, '\n'))
			break ;
	}
	return (backup);
}

static char	*extract_line(char *line)
{
	size_t	i;
	char	*backup;

	i = 0;
	while (line[i] != '\n' && line[i] != '\0')
		i++;
	if (line[i] == '\0' || line[1] == '\0')
		return (0);
	backup = ft_substr(line, i + 1, ft_strlen(line) - i);
	if (*backup == '\0')
	{
		free(backup);
		backup = NULL;
	}
	line[i + 1] = '\0';
	return (backup);
}

char	*get_next_line(int fd)
{
	char			*line;
	char			*buffer;
	static char		*backup = NULL;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	buffer = (char *)malloc(sizeof(char) * (BUFFER_SIZE +1));
	if (!buffer)
		return (0);
	line = read_and_return(fd, buffer, backup);
	free(buffer);
	if (!line)
		return (NULL);
	backup = extract_line(line);
	return (line);
}

// int	main(void)
// {
// 	char	*line;
// 	int		fd;

// 	fd = open("test.html", O_RDONLY);
// 	line = get_next_line(fd);
// 	printf("%s\n", line);

// 	return (EXIT_SUCCESS);
// }
