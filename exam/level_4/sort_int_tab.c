/*
Assignment name  : sort_int_tab
Expected files   : sort_int_tab.c
Allowed functions:
--------------------------------------------------------------------------------

Write the following function:

void sort_int_tab(int *tab, unsigned int size);

It must sort (in-place) the 'tab' int array, that contains exactly 'size'
members, in ascending order.

Doubles must be preserved.

Input is always coherent.
*/

void sort_int_tab(int *tab, unsigned int size)
{
	int tmp = 0;
	unsigned int i = 0;
	while( i < (size -1))
	{
		if(tab[i] > tab[i+1])
		{
			tmp = tab[i];
			tab[i] = tab[i+1];
			tab[i+1]= tmp;
			i = 0;
		}
		else
			i++;
	}
}

#include <stdio.h>
int main ()
{
	int tab[9] = {5,9,7,3,1,5,6,4,9};
	unsigned int size = 9;
	unsigned int i = 0;
	sort_int_tab(tab, size);
	while (i < size)
		printf("%d\n", tab[i++]);
	return 0;
}
