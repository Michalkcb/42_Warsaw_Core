/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 13:08:27 by mbany             #+#    #+#             */
/*   Updated: 2024/04/12 12:21:44 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print_arg(va_list args, int s)
{
	int	i;

	i = 0;
	if (s == 'c')
		i = ft_put_c(va_arg(args, int));
	else if (s == 's')
		i = ft_put_s(va_arg(args, char *));
	else if (s == 'd' || s == 'i')
		i = ft_put_n(va_arg(args, int));
	else if (s == '%')
		i = ft_put_c(s);
	else if (s == 'u')
		i = ft_put_u(va_arg(args, unsigned int));
	else if (s == 'x' || s == 'X')
		i = ft_put_x(va_arg(args, unsigned int), s);
	else if (s == 'p')
		i = ft_put_p(va_arg(args, size_t));
	return (i);
}

int	ft_printf(const char *string, ...)
{
	va_list	args;
	int		len;

	va_start(args, string);
	len = 0;
	while (*string)
	{
		if (*string == '%')
		{
			len += ft_print_arg(args, *(++string));
		}
		else
			len += ft_put_c(*string);
		string++;
	}
	va_end(args);
	return (len);
}

// int main()
// {
// 	char c = 'c';
// 	ft_printf("%c\n", c);
// 	char s[] = "sdhdsh";
// 	ft_printf("%s\n", s);
// 	int d = 999;
// 	ft_printf("%d\n", d);
// 		int i = 666;
// 	ft_printf("%i\n", i);
// 	ft_printf("%%\n");
// 	int u = 777777777;
// 	ft_printf("%u\n", u);
// 	int x = 15;
// 	ft_printf("%x\n", x);
// 	int X = 31;
// 	ft_printf("%X\n", X);
// }
