/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 11:48:01 by mbany             #+#    #+#             */
/*   Updated: 2024/03/03 15:09:59 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Turn in files -
// Parameters c: The character to output.
// fd: The file descriptor on which to write.
// Return value None
// External functs. write
// Description Outputs the character ’c’ to the given file
// descriptor.
#include <unistd.h>
#include <stdio.h>

void ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int main ()
// {
// 	char c = 'a';
// 	int fd = 1;

// 	printf("writing character '%c' to file descriptor %d\n", c, fd);
// 	ft_putchar_fd(c,fd);
// 	return (0);
// }