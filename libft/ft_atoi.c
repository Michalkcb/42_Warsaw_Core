/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:39:03 by mbany             #+#    #+#             */
/*   Updated: 2024/02/28 15:42:14 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (result * sign);
}

// #include <stdio.h>
// int main(void)
// {
//     char str1[] = "  -12345";
//     char str2[] = "6789";
//     char str3[] = "42";
//     char str4[] = "   +987";
//     char str5[] = "  +0";
//     char str6[] = "  -2147483648";

//     int num1 = ft_atoi(str1);
//     int num2 = ft_atoi(str2);
//     int num3 = ft_atoi(str3);
//     int num4 = ft_atoi(str4);
//     int num5 = ft_atoi(str5);
//     int num6 = ft_atoi(str6);

//     // Testujemy wyniki
//     printf("Num1: %d\n", num1);
//     printf("Num2: %d\n", num2);
//     printf("Num3: %d\n", num3);
//     printf("Num4: %d\n", num4);
//     printf("Num5: %d\n", num5);
//     printf("Num6: %d\n", num6);

//     return 0;
// }