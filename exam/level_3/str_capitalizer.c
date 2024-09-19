/*
Assignment name  : str_capitalizer
Expected files   : str_capitalizer.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes one or several strings and, for each argument,
capitalizes the first character of each word (If it's a letter, obviously),
puts the rest in lowercase, and displays the result on the standard output,
followed by a \n.

A "word" is defined as a part of a string delimited either by spaces/tabs, or
by the start/end of the string. If a word only has one letter, it must be
capitalized.

If there are no arguments, the progam must display \n.

Example:

$> ./str_capitalizer | cat -e
$
$> ./str_capitalizer "a FiRSt LiTTlE TESt" | cat -e
A First Little Test$
$> ./str_capitalizer "__SecONd teST A LITtle BiT   Moar comPLEX" "   But... This iS not THAT COMPLEX" "     Okay, this is the last 1239809147801 but not    the least    t" | cat -e
__second Test A Little Bit   Moar Complex$
   But... This Is Not That Complex$
     Okay, This Is The Last 1239809147801 But Not    The Least    T$
$>
*/
#include <unistd.h>

int str_capitalizer(char *s)
{
	int i = 0;
	if(s[i] >= 'a' && s[i] <= 'z')
		s[i] -= 32;
	write(1,&s[i],1);
	while(s[i])
	{
		if(s[i] >= 'A' && s[i] <= 'Z')
			s[i] += 32;
		if((s[i] >= 'a' && s[i] <= 'z') && (s[i-1] == ' ' || s[i - 1] == '\t'))
			s[i] -= 32;
		write(1,&s[i],1);

		++i;
	}
return 0;

}

int main(int ac, char **av)
{
	if ( ac >= 2)
	{
		int i = 1;
		while (i < ac)
		{
			str_capitalizer(av[i]);
			write(1,"\n",1);
			i++;
		}
	}
	write(1,"\n",1);
	return 0;
}

































// #include <unistd.h>

// void str_capitalizer(char *s)
// {
// 	int i = 0;

// 	if (s[i] >='a' && s[i] <= 'z')
// 		s[i] -= 32;
		
// 	write(1, &s[i],1);

// 	while (s[++i])
// 	{
// 		if (s[i] >= 'A' && s[i] <= 'Z')
// 			s[i] += 32;

// 		if ((s[i] >= 'a' && s[i] <= 'z') && (s[i - 1] == ' ' || s[i - 1] == '\t'))
// 			s[i] -= 32;

// 		write(1, &s[i],1);
// 	}
// }

// int main (int ac, char *av[])
// {
// 	int i = 0;
// 	if (ac < 2)
// 		write(1, "\n",1);
// 	else
// 	{
// 		i = 1;
// 		while (i < ac)
// 		{
// 			str_capitalizer(av[i]);
// 			write(1,"\n",1);
// 			i++;
// 		}
// 	}
// 	return 0;
// }
