/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 13:08:27 by mbany             #+#    #+#             */
/*   Updated: 2024/04/09 16:39:09 by mbany            ###   ########.fr       */
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

int	ft_put_n(int n)
{
	return (ft_put_d_rec(n, 0));
}

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

static int ft_put_x_rec(unsigned int n, char *hex, int len)
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

int ft_put_x(unsigned int n, int s)
{
	char	*hex;

	if (s == 'x')
		hex = "0123456789abcdef";
	else
		hex = "0123456789ABCDEF";
	return (ft_put_x_rec(n, hex, 0));
}

static int ft_print_arg(va_list args, int s)
{
	int i;

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
		int i = 666;
	ft_printf("%i\n", i);
	ft_printf("%%\n");
	int u = 777777777;
	ft_printf("%u\n", u);
	int x = 15;
	ft_printf("%x\n", x);
	int X = 31;
	ft_printf("%X\n", X);
}
