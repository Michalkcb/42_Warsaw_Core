/*
Assignment name	: ft_strpbrk
Expected files	: ft_strpbrk.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the function strpbrk
(man strpbrk).

The function should be prototyped as follows:

char	*ft_strpbrk(const char *s1, const char *s2);

STRPBRK(3) (simplified)

NAME
     strpbrk –- locate multiple characters in string
LIBRARY
     Standard C Library (libc, -lc)
SYNOPSIS
     #include <string.h>
     char *strpbrk(const char *s, const char *charset);

DESCRIPTION
     The strpbrk() function locates in the null-terminated string s the first
     occurrence of any character in the string charset and returns a pointer to this
     character.  If no characters from charset occur anywhere in s strpbrk()
     returns NULL.
RETURN VALUES
     The strpbrk() function return a pointer to the first occurence of any character
     in the string,if no characters occur anywhere in s, strpbrk() returns NULL.

     */

#include <stddef.h>


char	*ft_strpbrk(const char *s1, const char *s2)
{
	int i;
	int	j;

	i = 0;
	while (s1[i])
	{
		j = 0;
		while (s2[j])
		{
			if (s2[j] == s1[i])
				return (char *)&(s1[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

    #include <stdio.h>
    #include <string.h>
    int main()
    {
    char *s1 = "qwertyu";
    char *s2 = "q";

   
        printf("w main: %s\n", ft_strpbrk(s1, s2)); // Wypisanie od znalezionego znaku do końca `s1`
        printf("w orginal: %s\n", strpbrk(s1, s2)); // Wypisanie od znalezionego znaku do końca `s1`

    }
