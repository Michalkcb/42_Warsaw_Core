/*
Assignment name  : inter
Expected files   : inter.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and displays, without doubles, the
characters that appear in both strings, in the order they appear in the first
one.

The display will be followed by a \n.

If the number of arguments is not 2, the program displays \n.

Examples:

$>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
padinto$
$>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6ewg4$
$>./inter "rien" "cette phrase ne cache rien" | cat -e
rien$
$>./inter | cat -e
$
*/

#include <unistd.h>

int main(int ac, char *av[])
{
	if (ac == 3)
	{
		int i = 0;
		int j;
		while (av[1][i])
		{
			j=0;
			int duplicate = 0;
			int k = 0;
			while (k <i)
			{
				if (av[1][i] == av[1][k])
				{
					duplicate = 1;
					break;
				}
				k++;
			}
	if (!duplicate)
        {
            int found_in_both = 0;
             while (av[2][j])
             {
                if (av[1][i] == av[2][j])
                {
                    found_in_both = 1;
                    break;
                }
                    j++;
                }
                if (found_in_both)
                    write(1, &av[1][i], 1);
				j++;
			}
			i++;
		}
		

	}
	write(1,"\n",1);
	return 0;
}