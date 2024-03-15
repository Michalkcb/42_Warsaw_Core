/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 14:53:59 by mbany             #+#    #+#             */
/*   Updated: 2024/03/14 10:05:49 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!n)
		return (0);
	while (s1[i] == s2[i] && s1[i] != 0 && i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

//#include <stdio.h>
// int main(void)
// {
//     char str1[] = "Georgia";
//     char str2[]= "Utah";
//     int result;
//     printf("%s\n", str1);
//     result = ft_strncmp(str1, str2, 1);
//     printf("%d\n", result);
//     return (0);
// }
