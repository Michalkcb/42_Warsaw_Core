/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 16:34:50 by mbany             #+#    #+#             */
/*   Updated: 2024/06/03 16:29:59 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : ft_strdup
Expected files   : ft_strdup.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Reproduce the behavior of the function strdup (man strdup).

Your function must be declared as follows:

char    *ft_strdup(char *src);
*/
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int s_len(char *s)
{
	int i = 0;
	while(s[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	size_t i = 0;
	size_t len = s_len(src);
	char *dest = (char *)malloc(sizeof(char)*(len + 1));
	if (!dest)
		return 0;
	while (i <len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
	}
	


int main()
{
    char *original = "Hello, World!";
    char *duplicate = ft_strdup(original);

    if (duplicate)
    {
        printf("Original string: %s\n", original);
        printf("Duplicate string: %s\n", duplicate);
        free(duplicate);
    }
    else
    {
        printf("Memory allocation failed.\n");
    }

    return 0;
}