/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 13:13:50 by mbany             #+#    #+#             */
/*   Updated: 2024/03/14 10:00:32 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*dest;

	dest = (void *)malloc(nmemb * size);
	if (!dest)
		return (0);
	ft_bzero(dest, nmemb * size);
	return (dest);
}

// int main (void)
// {
// 	size_t n = 5;
// 	char *s = (char *)ft_calloc(n, sizeof(char));
// 	if (!s)
// 	{
// 		printf("Memory allocation failed\n");
// 		return 1;
// 	}
// 	printf("After calloc: %s\n", s);
// 	free(s);
// 	return 0;
// }
