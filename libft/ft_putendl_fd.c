/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 11:49:17 by mbany             #+#    #+#             */
/*   Updated: 2024/03/18 11:02:28 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Turn in files -
// Parameters s: The string to output.
// fd: The file descriptor on which to write.
// Return value None
// External functs. write
// Description Outputs the string ’s’ to the given file descriptor
// followed by a newline.
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

// int main(void)
// {
//     int fd = 1;
//     char *str = "Hello, world!\n";
//     ft_putendl_fd(str, fd);
//     return (0);
// }
