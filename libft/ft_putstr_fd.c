/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 11:48:38 by mbany             #+#    #+#             */
/*   Updated: 2024/03/18 11:02:45 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_putstr_fd function writes a string to a specified file descriptor.
**
** Parameters:
** s - A pointer to the string to be written.
** fd - The file descriptor where the string will be written.
**
** Return:
** None.
**
** Description:
** The ft_putstr_fd function writes the contents of a string to the specified
** file descriptor. It uses the write system call to write the string to the
** file descriptor. The function assumes that the write operation will be
** successful and does not include explicit error handling.
**
** Note:
** It's important to ensure that the file descriptor is valid and open for
** writing before calling this function to avoid unexpected behavior or errors.
**
** Example:
** char str[] = "Hello, World!";
** ft_putstr_fd(str, 1);
** The string "Hello, World!" will be written to the standard output
** (STDOUT_FILENO).
**
**
** char error[] = "Error: File not found";
** ft_putstr_fd(error, 2);
** The string "Error: File not found" will be written to the standard error
** (STDERR_FILENO).
**
** ft_putstr_fd("Hello", 0);
** The string "Hello" will be written to the standard input (STDIN_FILENO).
** (Note: The string will not be visible on the terminal since it is an input
** stream)
*/

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}

// int main(void)
// {
//     int fd = 1;
//     char *str = "Hello, world!\n";
//     ft_putstr_fd(str, fd);
//     return 0;
// }
