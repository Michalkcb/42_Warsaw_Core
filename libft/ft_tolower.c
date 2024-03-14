/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:52:02 by mbany             #+#    #+#             */
/*   Updated: 2024/03/14 09:15:27 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(char c)
{
	while (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

// int main()
// {
//     char test = 'a';
//     char result = ft_tolower(test);

//     printf("'%c' afer conversion: '%c'\n", test, result);
//     return (0);
// }
