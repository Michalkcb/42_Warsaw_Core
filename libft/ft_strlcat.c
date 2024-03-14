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
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size <= dst_len)
		return (size + src_len);
	while (i < size - src_len - 1 && src != 0)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = 0;
	return (dst_len + src_len);
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
