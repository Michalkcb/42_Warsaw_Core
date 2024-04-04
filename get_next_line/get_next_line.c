/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 13:00:52 by mbany             #+#    #+#             */
/*   Updated: 2024/04/04 13:56:01 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//=∂/\/\[](_)§ /\/\@|V †|-|@¯|¯ /-/!570®1<|-\£1_`/ ¢@/\/\ε vv!7}{ ???

# include <stdlib.h>
# include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#ifndef BUFFER_SIZE
#define BUFFER_SIZE 42
#endif
int	ft_strlen(char *s)
{
	int	i;
	i = 0;
	while (s[i] != 0)
		i++;
	return (i);
}
char	*ft_strdup(char *s)
{
	int		i;
	int		len;
	char	*dest;
	i = 0;
	len = ft_strlen(s);
	dest = malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (0);
	while (s[i])
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		j;
	int		s1_len;
	int		s2_len;
	char	*dest;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	dest = (char *)malloc((s1_len + s2_len + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		dest[i + j] = s2[j];
		j++;
	}
	dest[i + j] = 0;
	return (dest);
}

char	*ft_strchr(char const *str, int c)
{
	while (*str)
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	if (*str == (char)c)
		return ((char *)str);
	else
		return (NULL);
}

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char	*buffer;
	char	*line;
	int		b;
	int		i;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	line = ft_strdup("");
	if (!line)
	{
		free(buffer);
		return (NULL);
	}	
	b = read(fd, buffer, BUFFER_SIZE);
	while (b > 0)
	{
		buffer[b] = '\0';
		line = ft_strjoin(line, buffer);
		if (!line)
		{
			free(buffer);
			return (NULL);
		}	
		if (ft_strchr(buffer,'\n'))
			break ;
		b = read(fd, buffer, BUFFER_SIZE);
	}
	free(buffer);	
	if (b <= 0 && ft_strlen(line) == 0)
		{
			free(line);
			return (NULL);
		}
	return (line);
}

int	main(void)
{
	char	*line;
	int		i;
	int		fd1;
	fd1 = open("test.txt", O_RDONLY);
	i = 1;
	while (i != 40)
	{
		line = get_next_line(fd1);
		printf("%s", line);
		free(line);
		i++;
	}
	close(fd1);
	return (0);
}