/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 13:00:52 by mbany             #+#    #+#             */
/*   Updated: 2024/03/22 09:47:50 by mbany            ###   ########.fr       */
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

// stage 1
char *get_next_line(int fd)
{
	return ("hello");
}
int main(void)
{
	char *str;
	str = get_next_line(1);
	printf("%s\n", str);
	return (0);
}