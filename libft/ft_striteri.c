/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 11:43:56 by mbany             #+#    #+#             */
/*   Updated: 2024/03/14 09:44:00 by mbany            ###   ########.fr       */
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

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// #include <stdlib.h>
// #include <stdio.h>
// void my_f(unsigned int i, char *c)
// {
//     (void)i;
//     if (*c >= 'a' && *c <= 'z')
//         *c += 3;
// }

// int main()
// {
// 	char s[] = "abcd";
// 	ft_striteri(s, my_f);
// 	printf("Wynik działania ft_striteri: %s\n", s);
// 	return (0);
// }