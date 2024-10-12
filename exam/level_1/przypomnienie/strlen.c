/*Assignment name  : ft_strlen
Expected files   : ft_strlen.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that returns the length of a string.

Your function must be declared as follows:

int	ft_strlen(char *str);
*/

int	ft_strlen(char *str)
{
    int i = 0;
    while (str[i] != 0)
        i++;
    return (i);
}

#include <stdio.h>
int main()
{
    char str[] = "12345678";
    printf("%d\n", ft_strlen(str));
}
