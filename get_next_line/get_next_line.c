/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 13:00:52 by mbany             #+#    #+#             */
/*   Updated: 2024/03/22 09:49:24 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// /=∂/\/\[](_)§ /\/\@|V †|-|@¯|¯ /-/!570®1<|-\£1_`/ ¢@/\/\ε vv!7}{ ???
// FAMOUS MAN THAT HISTORICALLY CAME WITH

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#ifndef BUFFER_SIZE
#define BUFFER_SIZE = 42
#endif

// stage 2
char *get_next_line(int fd)
{
	return ("hello");
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