/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_d.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 12:18:14 by mbany             #+#    #+#             */
/*   Updated: 2024/04/12 14:05:43 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_put_d_rec(int nb, int len)
{
	if (nb == -2147483648)
	{
		len += ft_put_s("-2147483648");
		return (len);
	}
	else if (nb < 0)
	{
		len += ft_put_c('-');
		len = ft_put_d_rec(-nb, len);
	}
	else if (nb >= 10)
	{
		len = ft_put_d_rec(nb / 10, len);
		len += ft_put_c(nb % 10 + '0');
	}
	else
	{
		len += ft_put_c(nb + '0');
	}
	return (len);
}

int	ft_put_d(int n)
{
	return (ft_put_d_rec(n, 0));
}
