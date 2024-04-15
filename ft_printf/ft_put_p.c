/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 12:21:18 by mbany             #+#    #+#             */
/*   Updated: 2024/04/12 12:21:36 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_len_ptr(size_t nb)
{
	int	len;

	len = 0;
	while (nb != 0)
	{
		len++;
		nb = nb / 16;
	}
	return (len);
}

void	ft_put_ptr(size_t nb)
{
	if (nb >= 16)
	{
		ft_put_ptr(nb / 16);
		ft_put_ptr(nb % 16);
	}
	else
	{
		if (nb <= 9)
			ft_put_c((nb + '0'));
		else
			ft_put_c((nb - 10 + 'a'));
	}
}

int	ft_put_p(size_t ptr)
{
	int	ptr_print;

	ptr_print = 0;
	if (ptr == 0)
		ptr_print = ptr_print + write(1, "(nil)", 5);
	else
	{
		ptr_print = ptr_print + write(1, "0x", 2);
		ft_put_ptr(ptr);
		ptr_print = ptr_print + ft_len_ptr(ptr);
	}
	return (ptr_print);
}
