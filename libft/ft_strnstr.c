/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 14:31:04 by mbany             #+#    #+#             */
/*   Updated: 2024/03/14 10:05:45 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*little == 0)
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while (i + j < len && big[i + j] == little[j] && little[j])
		{
			if (little[j + 1] == 0)
				return ((char *)big + i);
			j++;
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>
// int main(void)
// {
// 	const char *big = "Hello, world!";
// 	const char *little = "world";

// 	char *result = ft_strnstr(big, little, 13); // 13 to długość big

// 	if (result)
// 		printf("Znaleziono: %s\n", result);
// 	else
// 		printf("Nie znaleziono\n");

// 	return 0;
// }
