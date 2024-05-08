/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 09:34:02 by mbany             #+#    #+#             */
/*   Updated: 2024/04/25 09:54:49 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : rev_print
Expected files   : rev_print.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string, and displays the string in reverse
followed by a newline.

If the number of parameters is not 1, the program displays a newline.

Examples:

$> ./rev_print "zaz" | cat -e
zaz$
$> ./rev_print "dub0 a POIL" | cat -e
LIOP a 0bud$
$> ./rev_print | cat -e
$
*/
#include <unistd.h>
#include <stdio.h>

int s_len(char *s)
{
	int i = 0;
	while(s[i])
		i++;
	return (i);

}
int rev_print(char *s)
{
	int len = s_len(s);

	while(len >=0)
	{
		write(1,&s[len],1);
		len--;
	}
	return (0);
}

int main()
{
	char s[] ="qwerty";
	rev_print(s);
	printf("\n");
	return 0;
}