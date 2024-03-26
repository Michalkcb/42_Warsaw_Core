/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 13:00:52 by mbany             #+#    #+#             */
/*   Updated: 2024/03/26 10:55:27 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// /=∂/\/\[](_)§ /\/\@|V †|-|@¯|¯ /-/!570®1<|-\£1_`/ ¢@/\/\ε vv!7}{ ???
// FAMOUS MAN THAT HISTORICALLY CAME WITH

#include "get_next_line.h"

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0' && s[i] != '\n')
		i++;
	if (s[i] == '\n')
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		len;
	int		i;
	char	*new_str;

	len = ft_strlen(s1) + ft_strlen(s2);
	i = 0;
	new_str = (char *)malloc(sizeof(char) * (len + 1));
	if (!new_str)
		return (free(s1), NULL);
	while (s1 && s1[i])
	{
		new_str[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2 && s2[i])
	{
		new_str[len - ft_strlen(s2) + i] = s2[i];
		if (s2[i] == '\n')
			break ;
		i++;
	}
	new_str[len] = '\0';
	free(s1);
	return (new_str);
}

int	update_buffer(char *buf)
{
	int	flag;
	int	i;
	int	j;

	flag = 0;
	i = 0;
	j = 0;
	while (buf[i])
	{
		if (flag)
			buf[j++] = buf[i];
		if (buf[i] == '\n')
			flag = 1;
		buf[i++] = '\0';
	}
	return (flag);
}

char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE + 1];
	int			bytes;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	line = NULL;
	bytes = 0;
	bytes = read(fd, buffer, BUFFER_SIZE);
	while (buffer[0] || bytes > 0)
	{
		line = ft_strjoin(line, buffer);
		if (!line)
			return (NULL);
		if (update_buffer(buffer))
			break ;
		bytes = read(fd, buffer, BUFFER_SIZE);
	}
	if (line && bytes < 0)
	{
		free(line);
		line = NULL;
	}
	return (line);
}

// int main()
// {
// 	int fd;
// 	char *line;

// 	fd = open("file1.txt", O_RDONLY);
// 	if (fd == -1)
// 	{
// 		perror("open");
// 		return 1;
// 	}
// 	while ((line = get_next_line(fd)) != NULL)
// 	{
// 		printf("%s\n", line);
// 		free(line);
// 	}
// 	close(fd);
// 	return 0;
// }
