/*
Assignment name  : ft_itoa
Expected files   : ft_itoa.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write a function that takes an int and converts it to a null-terminated string.
The function returns the result in a char array that you must allocate.

Your function must be declared as follows:

char	*ft_itoa(int nbr);

*/
#include <stdlib.h>

char	*ft_itoa(int nbr)
{
	if (nbr == -2147483648)
		return("-2147483648\0");

	int n = nbr;
	int len = 0;

	if(nbr <= 0)
		len++;

	while(n)
		{
			n /= 10;
			len++;
		}

	char *res = (char *)malloc(sizeof(char) * (len +1));
	if ( res == NULL)
		return NULL;
	res[len] = '\0';

	if (nbr == 0)
	{
		res[0] = '0';
		return (res);
	}
	if (nbr < 0)
	{
		res[0] = '-';
		nbr = -nbr;
	}
	while (nbr)
	{
		res[--len] = nbr %10 +'0';
		nbr /= 10;
	}
	return res;
	
}
#include <stdio.h>
int main ()
{
	int nbr = 19;
	printf("%s", ft_itoa(nbr));

}
