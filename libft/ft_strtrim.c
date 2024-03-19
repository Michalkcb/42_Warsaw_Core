/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 11:40:52 by mbany             #+#    #+#             */
/*   Updated: 2024/03/18 11:03:57 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Prototype char *ft_strtrim(char const *s1, char const *set);
// Turn in files -
// Parameters s1: The string to be trimmed.
// set: The reference set of characters to trim.
// Return value The trimmed string.
// NULL if the allocation fails.
// External functs. malloc
// Description Allocates (with malloc(3)) and returns a copy of
// ’s1’ with the characters specified in ’set’ removed
// from the beginning and the end of the string.

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*dest;

	while (!s1)
		return (0);
	while (!set)
		return ((char *)s1);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (s1[end] && ft_strchr(set, s1[end]) && end >= start)
		end--;
	dest = (char *)malloc(sizeof(char) * ((end - start + 1) + 1));
	if (!dest)
		return (0);
	ft_strlcpy(dest, s1 + start, (end - start + 1) + 1);
	return (dest);
}

// int main()
// {
// 	const char *s1 = "Hello, world!";
// 	const char *set = "Hd!";
// 	char *result = ft_strtrim(s1, set);
// 	if (result)
// 	{
// 		printf("Original string: \"%s\"\n", s1);
// 		printf("Trimmed string: \"%s\"\n", result);
// 		free(result);
// 	}
// 	else
// 	{
// 		printf("Memory allocation failed.\n");
// 	}
// 	return 0;
// }
