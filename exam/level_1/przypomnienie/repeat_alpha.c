/*Assignment name  : repeat_alpha
Expected files   : repeat_alpha.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program called repeat_alpha that takes a string and display it
repeating each alphabetical character as many times as its alphabetical index,
followed by a newline.

'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

Case remains unchanged.

If the number of arguments is not 1, just display a newline.

Examples:

$>./repeat_alpha "abc"
abbccc
$>./repeat_alpha "Alex." | cat -e
Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
$>./repeat_alpha 'abacadaba 42!' | cat -e
abbacccaddddabba 42!$
$>./repeat_alpha | cat -e
$
$>
$>./repeat_alpha "" | cat -e
$
$>
*/

#include <unistd.h>
int main(int ac, char *av[])
{
        int i;
        int j;
    if (ac == 2)
    {
            i = 0;
        while (av[1][i])
        {
            if (av[1][i] >= 'A' && av[1][i] <= 'Z')
            {
                j = 0;
                while (j < av[1][i] - 64)
                {
                    write(1,&av[1][i],1);
                    j++;
                }

            }
            else if (av[1][i] >= 'a' && av[1][i] <= 'z')
            {
                j = 0;
                while (j < av[1][i] - 96)
                {
                    write(1,&av[1][i],1);
                    j++;
                }
                
            }
            else
                write(1,&av[1][i],1);
            i++;

        }

    }
    write(1,"\n",1);
}