/*
Assignment name  : add_prime_sum
Expected files   : add_prime_sum.c
Allowed functions: write, exit
--------------------------------------------------------------------------------

Write a program that takes a positive integer as argument and displays the sum
of all prime numbers inferior or equal to it followed by a newline.

If the number of arguments is not 1, or the argument is not a positive number,
just display 0 followed by a newline.

Yes, the examples are right.

Examples:

$>./add_prime_sum 5
10
$>./add_prime_sum 7 | cat -e
17$
$>./add_prime_sum | cat -e
0$
$>
*/
#include <unistd.h>

int ft_atoi (const char *s)
{

	int i = 0;
	int res = 0;
	int sign = 1;
	
	if(s[i] == '-')
		{
			sign = -1;
			i++;
		}
	while (s[i] >= '0' && s[i] <= '9')
	{
		res = res * 10 + s[i] -48;
		i++;
	}
	
	return (sign * res);
	
}
int ifprime ( int n)
{
	int i = 2;
	if(n == 1)
		return 0;
	while (i < n)
	{
		if(n % i == 0)
			return 0;
		i++;
	}
	
return (1);
}

void putn (int nbr)
{
	if (nbr > 9)
		putn(nbr / 10);
	write(1,&"0123456789"[nbr % 10],1);

}

int main (int ac, char **av)
{
	if (ac == 2)
	{
		int n = ft_atoi(av[1]);
		int sum = 0;
		while (n > 0)
		{
			if ( ifprime(n) == 1)
			sum = sum + n;
			n--;
		}
		putn(sum);
		write(1,"\n",1);
		

	}
	else
		write(1,"0\n",2);
	return 0;
}