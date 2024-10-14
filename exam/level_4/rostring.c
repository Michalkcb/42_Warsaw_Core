/*Assignment name  : rostring
Expected files   : rostring.c
Allowed functions: write, malloc, free
--------------------------------------------------------------------------------

Write a program that takes a string and displays this string after rotating it
one word to the left.

Thus, the first word becomes the last, and others stay in the same order.

A "word" is defined as a part of a string delimited either by spaces/tabs, or
by the start/end of the string.

Words will be separated by only one space in the output.

If there's less than one argument, the program displays \n.

Example:

$>./rostring "abc   " | cat -e
abc$
$>
$>./rostring "Que la      lumiere soit et la lumiere fut"
la lumiere soit et la lumiere fut Que
$>
$>./rostring "     AkjhZ zLKIJz , 23y"
zLKIJz , 23y AkjhZ
$>
$>./rostring "first" "2" "11000000"
first
$>
$>./rostring | cat -e
$
$>
*/
#include <unistd.h>
int first_word(char *s)
{
	while(*s == ' ' || *s == '\t')
		s++;
	while(*s != ' ' && *s != '\t' && *s != '\0')
	{
		write(1, &*s,1);
		s++;
	}
	return 0;
}
int main(int ac, char **av)
{
	if(ac == 2)
	{
		char *s = av[1];
		while(*s == ' ' || *s == '\t')
			s++;
		while(*s != ' ' && *s != '\t' && *s != '\0')
			s++;
		while(*s == ' ' || *s == '\t')
			s++;
		while(*s)
		{
			if(*s == ' ' || *s == '\t')
			{
				while(*s == ' ' || *s == '\t')
					s++;
				if(*s != '\0')
					write(1, " ",1);

			}
			else
				write(1,&*s,1);
			s++;
		}
		write(1, " ",1);
		first_word(av[1]);

	}
	write(1,"\n",1);
	return 0;
}