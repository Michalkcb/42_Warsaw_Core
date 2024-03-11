/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 11:40:52 by mbany             #+#    #+#             */
/*   Updated: 2024/03/11 12:09:30 by mbany            ###   ########.fr       */
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
#include <stddef.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != 0)
		i++;
	return (i);
}

char	*ft_strchr(char const *str, int c)
{
	while (*str)
	{
		if (*str == (char)c)
			return ((char *)str);
		*str++;
	}
	if (*str == (char)c)
		return ((char *)str);
	else
		return (NULL);
}

size_t ft_strlcpy(char *d, const char *s, size_t n)
{
    size_t  i;
    i = 0;

    while (s[i])
        i++;
    if (n == 0)
        return (i);
    while (--n && *s)
        *d++ = *s++;
    *d = '\0';
    return (i);
}

char *ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*dest;

	while (!s1)
		return (0);
	while (!set)
		return ((char*)s1);
	start = 0;
	end = ft_strlen(s) -1;
	
while (s1[start] && ft_strchr(set, s1[start]))
	start++;
while (s1[end] && ft_strchr(set, s1[end]) && end >= start)
	start++;
dest = (char *)malloc(sizeof(char) * ((end - start + 1) + 1))
if (!dest)
	return (0);
ft_strlcpy(dest, s1 + start, (end - start + 1) + 1);
return (dest)
}

int main()
{
}