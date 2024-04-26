/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 10:53:30 by mbany             #+#    #+#             */
/*   Updated: 2024/04/25 12:22:55 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : rot_13
Expected files   : rot_13.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays it, replacing each of its
letters by the letter 13 spaces ahead in alphabetical order.

'z' becomes 'm' and 'Z' becomes 'M'. Case remains unaffected.

The output will be followed by a newline.

If the number of arguments is not 1, the program displays a newline.

Example:

$>./rot_13 "abc"
nop
$>./rot_13 "My horse is Amazing." | cat -e
Zl ubefr vf Nznmvat.$
$>./rot_13 "AkjhZ zLKIJz , 23y " | cat -e
NxwuM mYXVWm , 23l $
$>./rot_13 | cat -e
$
$>
$>./rot_13 "" | cat -e
$
$>
*/

#include <unistd.h>
#include <stdio.h>

int rot_13(char *s)
{	
	int i = 0;
	while (s[i])
	{
	if ((s[i] >= 'a' && s[i] <= 'n') || (s[i] >= 'A' && s[i] <= 'N'))
		{	
			s[i] += 13;
			write(1,&s[i],1);
			i++;
		}
	else if ((s[i] >= 'm' && s[i] <= 'z') || (s[i] >= 'M' && s[i] <= 'Z'))
		{	
			s[i] -= 13;
			write(1,&s[i],1);
			i++;
		}
	}
	write(1,"\n",1);
	return 0;
}

int main()
{
	char s[] = "abc";
	rot_13(s);
}
