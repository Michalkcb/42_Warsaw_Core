/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 14:52:34 by mbany             #+#    #+#             */
/*   Updated: 2024/02/29 18:25:09 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

// int main ()
// {
//     char test = 'A';
//     if (ft_isascii(test))
//         printf ("yes.\n");
//     else
//         printf ("no.\n");

//     return (0);
// }
