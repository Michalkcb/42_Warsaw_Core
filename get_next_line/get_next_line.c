/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 13:00:52 by mbany             #+#    #+#             */
/*   Updated: 2024/03/27 13:58:31 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// /=∂/\/\[](_)§ /\/\@|V †|-|@¯|¯ /-/!570®1<|-\£1_`/ ¢@/\/\ε vv!7}{ ???
// # include <stdlib.h>
// # include <unistd.h>
// #include <stdio.h>
// #include <fcntl.h>
// #ifndef BUFFER_SIZE
// #define BUFFER_SIZE 42
// #endif
// int	ft_strlen(char *s)
// {
// 	int	i;
// 	i = 0;
// 	while (s[i] != 0)
// 		i++;
// 	return (i);
// }
// char	*ft_strdup(char *s)
// {
// 	int		i;
// 	int		len;
// 	char	*dest;
// 	i = 0;
// 	len = ft_strlen(s);
// 	dest = malloc(sizeof(char) * (len + 1));
// 	if (!dest)
// 		return (0);
// 	while (s[i])
// 	{
// 		dest[i] = s[i];
// 		i++;
// 	}
// 	dest[i] = '\0';
// 	return (dest);
// }
/////
/////
#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char	buffer;
	char	line[8000000];
	int		b;
	int		i;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	i = 0;
	b = read(fd, &buffer, 1);
	while (b > 0)
	{
		line[i++] = buffer;
		if (buffer == '\n')
			break ;
		b = read(fd, &buffer, 1);
	}
	line[i] = '\0';
	if (b <= 0 && i == 0)
		return (NULL);
	return (ft_strdup(line));
}

// int	main(void)
// {
// 	char	*line;
// 	int		i;
// 	int		fd1;
// 	fd1 = open("test.txt", O_RDONLY);
// 	i = 1;
// 	while (i < 500)
// 	{
// 		line = get_next_line(fd1);
// 		printf("line [%02d]: %s", i, line);
// 		free(line);
// 		i++;
// 	}
// 	close(fd1);
// 	return (0);
// }
