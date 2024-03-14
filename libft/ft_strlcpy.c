/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 15:47:07 by mbany             #+#    #+#             */
/*   Updated: 2024/03/14 09:35:10 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *d, const char *s, size_t n)
{
	size_t	i;

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

// int main (void)
// {
//     char s[] = "12345";
//     char d[10];
//     size_t result = ft_strlcpy(d,s, sizeof(d));
//     printf("skopiowany tekst: %s\n", d);
//     printf("długość skopiowanego tekstu: %zu\n", result);
// }
