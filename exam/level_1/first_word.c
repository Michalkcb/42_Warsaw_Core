/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:17:10 by mbany             #+#    #+#             */
/*   Updated: 2024/04/23 11:44:33 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : first_word
Expected files   : first_word.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays its first word, followed by a
newline.

A word is a section of string delimited by spaces/tabs or by the start/end of
the string.

If the number of parameters is not 1, or if there are no words, simply display
a newline.

Examples:

$> ./first_word "FOR PONY" | cat -e
FOR$
$> ./first_word "this        ...    is sparta, then again, maybe    not" | cat -e
this$
$> ./first_word "   " | cat -e
$
$> ./first_word "a" "b" | cat -e
$
$> ./first_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$>*/

#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	//sprawdzanie liczby argumentów
	if (argc == 2)
	{
		unsigned int i = 0;

		//spaces & tabs
		while (argv[1][i] == 32 || argv[1][i] == 9)
			i++;
			
		//print signs
		while (argv[1][i] != 32 && argv[1][i] != 9) 
			{
			write(1, &argv[1][i], 1);
			i++;
			}
	}
	
	write(1, "\n", 1);
	return (0);
}
