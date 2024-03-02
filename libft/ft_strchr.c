/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 16:10:06 by mbany             #+#    #+#             */
/*   Updated: 2024/03/02 15:13:26 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

// *str: To jest dereferencja wskaźnika. Używamy * przed wskaźnikiem, aby uzyskać wartość, na którą wskaźnik wskazuje.
// str*: To jest deklaracja wskaźnika. Używamy * po typie danych, aby zadeklarować wskaźnik na ten typ danych.
// int main(void)
// {
//     char str[] = "bca";
//     char *result;

//     result = ft_strchr(str, 'a');
//     if (result != NULL)
//         printf("Character 'a' found at position: %ld\n", result - str);
//     else
//         printf("Character 'a' not found in the string.\n");

//     return 0;
// }