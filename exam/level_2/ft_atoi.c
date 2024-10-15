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
int	ft_atoi(const char *n)
{
    int s = 1;
    int r = 0;
    // char *n;
    int i = 0;

    // n = (char *) str;

    while(n[i] == ' ' || (n[i] >= 9 && n[i] <= 13))
        i++;
	if (n[i] == '-' || n[i] == '+')
	{
		if (n[i] == '-')
			s = -1;
		i++;
	}
    while(n[i] != 0)
    {
        if(n[i] >= '0' && n[i] <= '9')
            r = r * 10 + n[i] - '0';
        else
            break;
        i++;
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
