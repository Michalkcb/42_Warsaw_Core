/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 11:41:49 by mbany             #+#    #+#             */
/*   Updated: 2024/03/14 09:56:37 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Turn in files -
// Parameters n: the integer to convert.
// Return value The string representing the integer.
// NULL if the allocation fails.
// External functs. malloc
// Description Allocates (with malloc(3)) and returns a string
// representing the integer received as an argument.
// Negative numbers must be handled.

#include "libft.h"

static int	nbr_len(int nbr)
{
	int	len;

	if (nbr <= 0)
		len = 1;
	else
		len = 0;
	while (nbr != 0)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

static void	handle_special(char *str, int *n, int *len)
{
	if (*n == -2147483648)
	{
		str[(*len)--] = '8';
		*n /= 10;
	}
	else if (!*n)
		str[0] = '0';
	if (*n < 0)
	{
		str[0] = '-';
		*n *= -1;
	}
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;

	len = nbr_len(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	str[len--] = 0;
	handle_special(str, &n, &len);
	while (n)
	{
		str[len--] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}

// #include <stdio.h>
// int main(void)
// {
// 	int num1 = -12345;
// 	int num2 = 6789;

// 	char *str1 = ft_itoa(num1);
// 	char *str2 = ft_itoa(num2);

// 	// Testujemy wyniki
// 	printf("Num1: %s\n", str1);
// 	printf("Num2: %s\n", str2);

// 	free(str1);
// 	free(str2);

// 	return 0;
// }
