/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 15:41:03 by mbany             #+#    #+#             */
/*   Updated: 2024/04/26 11:25:13 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : alpha_mirror
Expected files   : alpha_mirror.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program called alpha_mirror that takes a string and displays this string
after replacing each alphabetical character by the opposite alphabetical
character, followed by a newline.

'a' becomes 'z', 'Z' becomes 'A'
'd' becomes 'w', 'M' becomes 'N'

and so on.

Case is not changed.

If the number of arguments is not 1, display only a newline.

Examples:

$>./alpha_mirror "abc"
zyx
$>./alpha_mirror "My horse is Amazing." | cat -e
Nb slihv rh Znzarmt.$
$>./alpha_mirror | cat -e
$
$>
*/

#include <unistd.h>
#include <stdio.h>

int alpha_mirror(char *s)
{

	int i = 0;
	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = 'z' + 'a' - s[i];
			write(1, &s[i],1);
			i++;
		}
		else if (s[i] >= 'A' && s[i] <= 'Z')
		{
			s[i] = 'Z' + 'A' - s[i];
			write(1, &s[i],1);
			i++;
		}
	}
	write(1, "\n",1);
	return 0;
}

int main()
{
	char s[] = "aAzZnNmM";
	alpha_mirror(s);
}
