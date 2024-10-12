/*
Assignment name  : ft_putstr
Expected files   : ft_putstr.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a function that displays a string on the standard output.

The pointer passed to the function contains the address of the string's first
character.

Your function must be declared as follows:

void	ft_putstr(char *str);
*/
#include <unistd.h>

char ft_putstr(char *s)
{
    int i = 0;
    while (s[i])
        write(1,&s[i++],1);

    
}


int main()
{
	char s[] = "qwertyuiooiuytrewqwertyuiiuytrewertyui\n";
	ft_putstr(s);
	return (0);
}