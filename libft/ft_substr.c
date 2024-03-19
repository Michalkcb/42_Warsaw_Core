/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 12:01:27 by mbany             #+#    #+#             */
/*   Updated: 2024/03/18 11:04:05 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	d_len;
	size_t	i;
	char	*dest;

	s_len = ft_strlen(s);
	if (start > s_len)
		d_len = 0;
	else if (s_len - start > len)
		d_len = len;
	else
		d_len = s_len - start;
	dest = (char *)malloc((d_len + 1) * sizeof(char));
	if (!dest)
		return (0);
	i = 0;
	while (i < d_len)
	{
		dest[i] = s[start + i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

// int main()
// {
//     const char *original = "This is a test string.";
//     unsigned int start = 5;
//     size_t len = 6;

//     char *substring = ft_substr(original, start, len);

//     if (substring)
//     {
//         printf("Original string: %s\n", original);
//         printf("Substring: %s\n", substring);
//         free(substring);
//     }
//     else
//     {
//         printf("Memory allocation failed.\n");
//     }

//     return 0;
// }
