/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 15:15:31 by mbany             #+#    #+#             */
/*   Updated: 2024/03/14 11:43:43 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char const *str, int c)
{
	const char	*last;

	last = NULL;
	while (*str)
	{
		if (*str == (char)c)
			last = str;
		str++;
	}
	if (*str == (char)c)
		return ((char *)str);
	return ((char *)last);
}

// int main(void)
// {
//     char str[] = "abc";
//     char *result = ft_strrchr(str, 'a');
//     if (result != NULL)
//         printf( "found b on position %ld\n", result - str);
//     else
//         printf( "not found b on position on any position\n");

// }
