/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 12:06:36 by mbany             #+#    #+#             */
/*   Updated: 2024/04/25 14:12:15 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : rotone
Expected files   : rotone.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays it, replacing each of its
letters by the next one in alphabetical order.

'z' becomes 'a' and 'Z' becomes 'A'. Case remains unaffected.

The output will be followed by a \n.

If the number of arguments is not 1, the program displays \n.

Example:

$>./rotone "abc"
bcd
$>./rotone "Les stagiaires du staff ne sentent pas toujours tres bon." | cat -e
Mft tubhjbjsft ev tubgg of tfoufou qbt upvkpvst usft cpo.$
$>./rotone "AkjhZ zLKIJz , 23y " | cat -e
BlkiA aMLJKa , 23z $
$>./rotone | cat -e
$
$>
$>./rotone "" | cat -e
$
$>
*/

#include <stdio.h>
#include <unistd.h>

int rotone(char *s)
{
        int i;
        
        i = 0;
        while (s[i])
        {
			if (s[i] == 'Z' || s[i] == 'z')
			{ 
				s[i] -= 25;
            	write(1, &s[i], 1);
            	i++;
			}

 			else if ((s[i] >= 'A' && s[i] <= 'Y') || (s[i] >= 'a' && s[i] <= 'y'))
            { 
				s[i] += 1;
            	write(1, &s[i], 1);
            	i++;
			}
        }
    write(1, "\n", 1);
	return 0;
}
int main()
{
	char s[] = "abczABCZ";
	rotone(s);
	return 0;
}