/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:39:56 by mbany             #+#    #+#             */
/*   Updated: 2024/04/29 14:37:35 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : ft_atoi
Expected files   : ft_atoi.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str to an integer (type int)
and returns it.

It works much like the standard atoi(const char *str) function, see the man.

Your function must be declared as follows:

int	ft_atoi(const char *str);
*/
#include <stdio.h>

int	ft_atoi(char *s)
{
	int sign = 1;
	long	r = 0;
	//usumięcie spacji 32 i tabulatorów 9-13
	while (*s == 32 || (*s >= 9 && *s <= 13))
		s++;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			sign = -1;
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		r = r * 10 + *s - '0';
		s++;
	}
	return (sign * (int)r);
	
}

int main()
{
	char a[] = "    \n\n\v\f\r\t -5234AAAgreghrsth";
	printf("%d\n",ft_atoi(a));
}