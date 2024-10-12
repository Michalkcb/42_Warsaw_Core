/*Assignment name  : ft_strcpy
Expected files   : ft_strcpy.c
Allowed functions:
--------------------------------------------------------------------------------

Reproduce the behavior of the function strcpy (man strcpy).

Your function must be declared as follows:

char    *ft_strcpy(char *s1, char *s2);
*/

char    *ft_strcpy(char *s1, char *s2)
{
    int i = 0;
    while (s2[i])
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = 0;
    return (s1);
}

#include <stdio.h>
#include <string.h>


int main()
{
    char s2[] = "hgfds";
    char s1[20];
    printf("%s\n",strcpy(s1,s2));
    printf("%s\n",ft_strcpy(s1,s2));


}
