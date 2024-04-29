/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 15:46:07 by mbany             #+#    #+#             */
/*   Updated: 2024/04/29 15:47:04 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name	: ft_strspn
Expected files	: ft_strspn.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the strspn function 
(man strspn).

The function should be prototyped as follows:

size_t	ft_strspn(const char *s, const char *accept);

STRSPN(3) (simplified)

NAME
    strspn -- span a string
LIBRARY
    Standard C Library (libc, -lc)
SYNOPSIS
    #include <string.h>
    size_t strspn(const char *s, const char *charset);
DESCRIPTION
    The strcspn() function spans the initial part of the null-terminated 
string s as long as the characters from s occur in the null-terminated 
string charset. In other words, it computes the string array index of the 
first character of s which is not in charset, else the index of the first 
null character
RETURN VALUES
    The strspn() functions return the number of characters spanned.
*/

#include <string.h>

size_t	ft_strspn(const char *s, const char *accept)
{

}

int main()
{
	
}