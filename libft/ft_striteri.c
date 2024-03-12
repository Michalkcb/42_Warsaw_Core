/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 11:43:56 by mbany             #+#    #+#             */
/*   Updated: 2024/03/12 10:55:27 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




// Turn in files -
// Parameters s: The string on which to iterate.
// f: The function to apply to each character.
// Return value None
// External functs. None
// Description Applies the function ’f’ on each character of
// the string passed as argument, passing its index
// as first argument. Each character is passed by
// address to ’f’ to be modified if necessary.
void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	
}

// #include <stdlib.h>

// size_t	ft_strlen(const char *s)
// {
// 	size_t	i;

// 	i = 0;
// 	while (s[i] != 0)
// 		i++;
// 	return (i);
// }

// char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
// {
// 	int		i;
// 	char	*dest;

// 	i = 0;
// 	dest = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
// 	while (!dest)
// 		return (0);
// 	while (s[i])
// 	{
// 		dest[i] = f(i, s[i]);
// 		i++;
// 	}
// 	dest[i] = 0;
// 	return (dest);
// }

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