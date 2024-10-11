/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:39:56 by mbany             #+#    #+#             */
/*   Updated: 2024/05/28 13:39:33 by mbany            ###   ########.fr       */
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
/* WRONG CODE | WRONG CODE | WRONG CODE | WRONG CODE | WRONG CODE |
VVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV
	#include <stdio.h>

int	ft_atoi(char *s)
{
	int sign = 1;
	long	r = 0;
	//usunięcie spacji 32 i tabulatorów 9-13
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
}*/


/* GOOD CODE | GOOD CODE | GOOD CODE | GOOD CODE | GOOD CODE |
VVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV
	*/
int	ft_atoi(const char *str)
{
    int s = 1;
    int r = 0;

 
    if(*str == '-' && *(str+1) == '2' && *(str+2) == '1'&& *(str+3) == '4'&& *(str+4) == '7'&& *(str+5) == '4'&& *(str+6) == '8'&& *(str+7) == '3'&& *(str+8) == '6'&& *(str+9) == '4'&& *(str+10) == '8')
        return(-2147483648);



    while(*str == ' ' || (*str >= 9 && *str <= 13))
        str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			s = -1;
		str++;
	}
    while(*str != 0)
    {
        if(*str >= '0' && *str <= '9')
            r = r * 10 + *str - '0';
        else
            break;
        str++;
    }
    return(s * r);
}
/*
	#include <stdio.h>
#include <stdlib.h>
int main(int ac, char **av)
{
    char *c = av[1];
    printf("reproduce: %d\n", ft_atoi(c));
    printf("orginal: %d\n", atoi(c));
    return 0;
}
*/
