/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_x.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 12:20:22 by mbany             #+#    #+#             */
/*   Updated: 2024/04/12 12:20:46 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_put_x_rec(unsigned int n, char *hex, int len)
{
	if (n <= 15)
		len += ft_put_c(hex[n % 16]);
	else
	{
		len = ft_put_x_rec(n / 16, hex, len);
		len += ft_put_c(hex[n % 16]);
	}
	return (len);
}

int	ft_put_x(unsigned int n, int s)
{
	char	*hex;

	if (s == 'x')
		hex = "0123456789abcdef";
	else
		hex = "0123456789ABCDEF";
	return (ft_put_x_rec(n, hex, 0));
}
