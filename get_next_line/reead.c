/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reead.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 16:01:59 by mbany             #+#    #+#             */
/*   Updated: 2024/03/21 16:30:21 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>


// stage 1
// char *get_next_line(int fd)
// {
// 	return ("hello");
// }
// int main(void)
// {
// 	char *str;
// 	str = get_next_line(1);
// 	printf("%s\n", str);
// 	return (0);
// }

// stage 2
// char *get_next_line(int fd)
// {
// 	return ("hello");
// }
// int main(void)
// {
// 	int fd;
// 	char *str;
// 	char *path;
// 	int i;
// 	path = "file1.txt";
// 	fd = open(path, O_RDONLY);
// 	i = 0;
// 	while (i < 6)
// 	{
// 		str = get_next_line(fd);
// 		printf("i: %i\n", i);
// 		printf("fd: %i, %s\n", fd, str);
// 		i++;
// 	}
// 		return (0);
// }

// stage 3
char *get_next_line(int fd)
{
	int	byte;
	char	c;
	char	*str_buffer;
	int	i;

	str_buffer = (char *)malloc(10000000);
	byte = read(fd, &c, 1);
while (byte > 0)
{
	str_buffer[i] = c;
	i++;
	if(c== '\n' || c == EOF)
		break;
	byte = read(fd, &c, 1);
}
if (i == 0 || byte < 0)
{
	free(str_buffer);
	return(NULL);
}

	str_buffer[i] = '\0';
	return (str_buffer);
}

int main(void)
{
	int fd;
	char *str;
	char *path;
	int i;

	path = "file1.txt";
	fd = open(path, O_RDONLY);
	i = 0;
	while (i < 6)
	{
		str = get_next_line(fd);
		printf("i: %i\n", i);
		printf("fd: %i, %s\n", fd, str);
		i++;
	}
		return (0);
}