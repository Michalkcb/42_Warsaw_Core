/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 10:24:36 by mbany             #+#    #+#             */
/*   Updated: 2024/03/14 11:43:13 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//  The strlcat() function appends the NUL-terminated string src to the end
//  of dst.  It will append at most size - strlen(dst) - 1 bytes, NUL-termi‐
//  nating the result.
//  The strlcat() function appends the NUL-terminated string src to the end
//  of dst.  It will append at most size - strlen(dst) - 1 bytes, NUL-termi‐
//  nating the result.

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != 0)
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < size && dst[i])
	{
		i++;
	}
	while ((i + j + 1) < size && src[j])
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i != size)
	{
		dst[i + j] = '\0';
	}
	return (i + ft_strlen(src));
}

// #include "libft.h"
// #include <stdio.h>
// int main(void)
// {
//     char dst[20] = "Hello";
//     const char *src = " world!";
//     size_t size = 20;
//     printf("Before ft_strlcat: dst = \"%s\"\n", dst);
//     size_t result = ft_strlcat(dst, src, size);
//     printf("After ft_strlcat: dst = \"%s\"\n", dst);
//     printf("Return value: %zu\n", result);
//     return 0;
// }
