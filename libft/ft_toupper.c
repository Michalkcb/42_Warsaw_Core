/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:52:02 by mbany             #+#    #+#             */
/*   Updated: 2024/02/29 14:09:31 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_toupper(char c)
{
	return (c - 32);
	return (c);
}

// int main()
// {
//     char test = 'a';
//     char result = ft_toupper(test);

//     printf("'%c' afer conversion: '%c'\n", test, result);
//     return (0);
// }
