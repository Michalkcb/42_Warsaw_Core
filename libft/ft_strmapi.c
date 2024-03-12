/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 11:43:00 by mbany             #+#    #+#             */
/*   Updated: 2024/03/12 10:43:19 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Turn in files -
// Parameters s: The string on which to iterate.
// f: The function to apply to each character.
// Return value The string created from the successive applications
// of ’f’.
// Returns NULL if the allocation fails.
// External functs. malloc
// Description Applies the function ’f’ to each character of the
// string ’s’, and passing its index as first argument
// to create a new string (with malloc(3)) resulting
// from successive applications of ’f’.
#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != 0)
		i++;
	return (i);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*dest;

	i = 0;
	dest = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	while (!dest)
		return (0);
	while (s[i])
	{
		dest[i] = f(i, s[i]);
		i++;
	}
	dest[i] = 0;
	return (dest);
}

// #include <stdio.h>
// char	my_f(unsigned int i, char c)
// {
// 	(void)i;
// 	if (c >= 'a' && c <= 'z')
// 		return (c - 3);
// 	else
// 		return (c);
// }

// int main()
// {
// 	char s[] = "abcd";
// 	char *r = ft_strmapi(s,&my_f);
// 	printf("text przed: %s\n", s);
// 	printf("text przed: %s\n", r);
// 	free(r);
// }