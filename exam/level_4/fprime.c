/*
Assignment name  : fprime
Expected files   : fprime.c
Allowed functions: printf, atoi
--------------------------------------------------------------------------------

Write a program that takes a positive int and displays its prime factors on the
standard output, followed by a newline.

Factors must be displayed in ascending order and separated by '*', so that
the expression in the output gives the right result.

If the number of parameters is not 1, simply display a newline.

The input, when there is one, will be valid.

Examples:

$> ./fprime 225225 | cat -e
3*3*5*5*7*11*13$
$> ./fprime 8333325 | cat -e
3*3*5*5*7*11*13*37$
$> ./fprime 9539 | cat -e
9539$
$> ./fprime 804577 | cat -e
804577$
$> ./fprime 42 | cat -e
2*3*7$
$> ./fprime 1 | cat -e
1$
$> ./fprime | cat -e
$
$> ./fprime 42 21 | cat -e
$
*/
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	if(ac == 2)
	{
		int n = atoi(av[1]);
		int i = 2;
		if(n == 1)
			printf("1");
		else
		{
			while(n > 1)
			{
				if((n % i) == 0)
				{
					printf("%d",i);
					n/=i;
					if(n > 1)
						printf("*");
				}
				else
					i++;
			}
		}

	}
	printf("\n");
	return 0;
}























// int main(int ac, char *av[])
// {
//     int i = 2;
//     int number = atoi(av[1]);

//     if (ac == 2)
//     {
//         if (number == 1)
//             printf("1");

//         else
//         {
//             while (number > 1)
//             {
//                 if (number % i == 0)
//                 {
//                     printf("%d", i);
//                     number /= i;
//                     if (number > 1)
//                         printf("*");
//                 }
//                 else
//                     i++;
//             }
//         }
//     }
