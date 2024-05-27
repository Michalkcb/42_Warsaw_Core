/*
Assignment name  : max
Expected files   : max.c
Allowed functions:
--------------------------------------------------------------------------------

Write the following function:

int		max(int* tab, unsigned int len);

The first parameter is an array of int, the second is the number of elements in
the array.

The function returns the largest number found in the array.

If the array is empty, the function returns 0.
*/

#include <stdio.h>

int		max(int* tab, unsigned int len)
{
	if (!tab)
		return 0;
	
	unsigned int i = 0;
	int max = 0;
	while (tab[i] && i < len)
	{
		if (max < tab[i])
			max = tab[i];
		i++;
		// printf("%i", i);
	}
	return (max);

}


int main()
{
	int tab[] = {98468646546546,1,1,1,1,8,6,88};
	printf("%d\n", max(tab, 6));
}