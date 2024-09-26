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
int i = 0;
while(s[i] == ' ' || s[i] == '\t')
	i++;
while(s[i] != ' ' && s[i] != '\t' && s[i] != '\0')
{
	write(1, &s[i],1);
	i++;
}

return 0;
}
int main( int ac, char **av)
{
	if(ac >1)
	{
		char *s = av[1];
		int i = 0;
		while(s[i] == ' ' || s[i] == '\t')
			i++;
		while(s[i] != ' ' && s[i] != '\t' && s[i] != '\0')
			i++;
		while(s[i] == ' ' || s[i] == '\t')
			i++;
		while(s[i])
		{
			if(s[i] == ' ' || s[i] == '\t')
			{
				while(s[i] == ' ' || s[i] == '\t')
					i++;
				if(s[i] !='\0')
					write(1, " ",1);
			}
			else
			{
				write(1, &s[i],1);
				i++;
			}
		}
		write(1, " ",1);
		first_word(s);
	}
	write(1, "\n",1);
	return 0;
}