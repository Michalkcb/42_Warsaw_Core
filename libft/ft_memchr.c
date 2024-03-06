/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 13:46:06 by mbany             #+#    #+#             */
/*   Updated: 2024/03/05 10:53:06 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <unistd.h>

void    *ft_memchr(void const *s, int c, size_t n)
{
    while (n--)
    {
        if (*(unsigned char *)s++ == (unsigned char)c)
            return ((void *)(unsigned char *)s - 1);
    }
    return (NULL);
}

// int main(void)
// {
//     char str[] = "123456";
// 	int c = '3';
//     void *ptr = ft_memchr(str, c, 6);
//     if (ptr != NULL)
//         printf("Character '%c' found at index: %ld\n",c, (char *)ptr - str);
//     else
//         printf("Character '%c' not found.\n",c);
//     return 0;
// }