/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 11:34:53 by mbany             #+#    #+#             */
/*   Updated: 2024/04/26 14:20:04 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : camel_to_snake
Expected files   : camel_to_snake.c
Allowed functions: malloc, realloc, write
--------------------------------------------------------------------------------

Write a program that takes a single string in lowerCamelCase format
and converts it into a string in snake_case format.

A lowerCamelCase string is a string where each word begins with a capital letter
except for the first one.

A snake_case string is a string where each word is in lower case, separated by
an underscore "_".

Examples:
$>./camel_to_snake "hereIsACamelCaseWord"
here_is_a_camel_case_word
$>./camel_to_snake "helloWorld" | cat -e
hello_world$
$>./camel_to_snake | cat -e
$
*/

#include <unistd.h>
#include <stdio.h>

int camel_to_snake(char *s)
{
	int i = 0;
	while (s[i])
	{
		if (s[i]>= 'A' && s[i] <= 'Z')
			{
				write(1,"_",1);
				s[i] += 32;
			}
			write(1,&s[i],1);
			i++;
	}
	write(1,"\n",1);
	return 0;	
}

int main()
{
	char s[]="sssSsssssSssssSSSSSssss";
	camel_to_snake(s);
}
