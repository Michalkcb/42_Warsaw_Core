/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 12:48:10 by mbany             #+#    #+#             */
/*   Updated: 2024/03/03 14:51:05 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>


void	ft_bzero(void *s, size_t n)
{
	while (n--)
		*(unsigned char *)s++ = 0;
}

// int main (void)
// {
// 	char s[] = "12345";
// 	size_t n = 3;
//     ft_bzero(s, n);
//     printf("After bzero: %s\n", s);
//     return 0;
// }