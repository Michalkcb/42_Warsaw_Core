/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 18:26:19 by mbany             #+#    #+#             */
/*   Updated: 2024/03/14 09:58:31 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= ' ' && c <= '~');
}

// int main()
// {
//     char test_char = 'A';
//     if (ft_isprint(test_char))
//         printf("Character '%c' is printable.\n", test_char);
//     else
//         printf("Character '%c' is not printable.\n", test_char);
//     return 0;
// }
