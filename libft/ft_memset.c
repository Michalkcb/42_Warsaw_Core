/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 10:55:10 by mbany             #+#    #+#             */
/*   Updated: 2024/03/14 10:07:55 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	void	*str_ptr;

	str_ptr = str;
	while (n--)
		*(unsigned char *)str++ = (unsigned char)c;
	return (str_ptr);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	str[10] = "123456789";
// 	ft_memset(str, 'x', 5);
// 	printf("po ustawieniu 'x': %s\n", str);
// 	return (0);
// }
