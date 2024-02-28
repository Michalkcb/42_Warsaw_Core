/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:16:56 by mbany             #+#    #+#             */
/*   Updated: 2024/02/28 15:32:03 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

// int main ()
// {
//     char test = 'A';
//     if (ft_isalpha(test))
//         printf ("is alphabetic .\n");
//     else
//         printf ("not alpha.\n");

//     return (0);
// }
