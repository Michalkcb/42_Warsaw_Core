/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 13:08:27 by mbany             #+#    #+#             */
/*   Updated: 2024/04/05 16:33:05 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_signcheck(char s, va_list *args, int *len, int *i)
{
	if (s == 'c')
		ft_put_c(va_arg(*args, int), len);
	else
		(*i)--;
}

ft_printf(const char *string, ...)
{
	va_list	args;
	int	len;
	int	i;

	va_start(args, string);
	while (*string)
	{
		if (*string == '%')
		{
			ft_signcheck(string[i], &args, &len, &i);
		}
		else
		{
			ft_print_char((char)string[i], &len);
			i++;
		}
	}
	va_end(args);
	return (len);
}