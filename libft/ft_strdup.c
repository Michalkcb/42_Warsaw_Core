/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 09:39:26 by mbany             #+#    #+#             */
/*   Updated: 2024/03/14 09:47:48 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdlib.h>
// #include <stdio.h>
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != 0)
		i++;
	return (i);
}

char	*ft_strdup(const char *s)
{
	size_t	i;
	size_t	len;
	char	*dest;

	len = ft_strlen(s);
	dest = (char *)malloc((len + 1) * sizeof(char));
	if (!dest)
		return (0);
	i = 0;
	while (i < len)
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

// 
// int main()
// {
//     const char *original = "Hello, World!";
//     char *duplicate = ft_strdup(original);

//     if (duplicate)
//     {
//         printf("Original string: %s\n", original);
//         printf("Duplicate string: %s\n", duplicate);
//         free(duplicate);
//     }
//     else
//     {
//         printf("Memory allocation failed.\n");
//     }

//     return 0;
// }
