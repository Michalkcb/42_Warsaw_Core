/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 13:08:27 by mbany             #+#    #+#             */
/*   Updated: 2024/04/08 16:05:23 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "ft_printf.h"
# include <unistd.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>

int	ft_put_c(int c)
{
	return (write(1, &c, 1));
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != 0)
		i++;
	return (i);
}

int	ft_put_s(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	write(1, str, i);
	return (1);
}
int	ft_put_n(int nb)
{
	if (nb == -2147483648)
	{
		ft_put_c('-');
		ft_put_c('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_put_c('-');
		nb *= -1;
	}
	if (nb >= 10)
	{
		ft_put_n(nb / 10);
		ft_put_n(nb % 10);
	}
	else
	{
		ft_put_c(nb + '0');
	}
	return (1);
}

static int ft_print_arg(va_list args, int s)
{
	int i;

	i = 0;
	if (s == 'c')
		i = ft_put_c(va_arg(args, int));
	else if (s == 's')
		i = ft_put_s(va_arg(args, char *));
	else if (s == 'd')
		i = ft_put_n(va_arg(args, int));
	else if (s == '%')
		i = ft_put_c(s);
	return (i);
}

int ft_printf(const char *string, ...)
{
	va_list args;
	int len;

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

int main()
{
	char c = 'c';
	ft_printf("%c\n", c);
	char s[] = "sdhdsh";
	ft_printf("%s\n", s);
	int d = 999;
	ft_printf("%d\n", d);
	int perc = '%';
	ft_printf("%%\n", perc);
}
