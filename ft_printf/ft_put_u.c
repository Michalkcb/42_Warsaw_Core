/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_u.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 12:19:44 by mbany             #+#    #+#             */
/*   Updated: 2024/04/12 12:20:02 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_put_u_rec(unsigned int n, int len)
{
	if (n <= 9)
	{
		len += ft_put_c(n % 10 + '0');
	}
	else
	{
		len = ft_put_u_rec(n / 10, len);
		len += ft_put_c(n % 10 + '0');
	}
	return (len);
}

int	ft_put_u(unsigned int n)
{
	return (ft_put_u_rec(n, 0));
}
