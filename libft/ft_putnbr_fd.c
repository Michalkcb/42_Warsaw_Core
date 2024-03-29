/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 11:49:56 by mbany             #+#    #+#             */
/*   Updated: 2024/03/18 11:02:36 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Turn in files -
// Parameters n: The integer to output.
// fd: The file descriptor on which to write.
// Return value None
// External functs. write
// Description Outputs the integer ’n’ to the given file
// descriptor.

#include "libft.h" 

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-n, fd);
	}
	else if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}

// int main(void)
// {
//     int number = 999;
//     ft_putnbr_fd(number, STDOUT_FILENO); 
//     ft_putchar_fd('\n', STDOUT_FILENO); 

//     return 0;
// }
