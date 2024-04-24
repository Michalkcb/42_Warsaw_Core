/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_cpy.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 12:00:26 by mbany             #+#    #+#             */
/*   Updated: 2024/04/24 13:05:16 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char *s_cpy(char *s1, char *s2)
{
int i = 0;
while(s2[i])
{
s1[i] = s2[i];
i++;
}
s1[i] = 0;
return(s1);
}

int main()
{
	char *s2 = "WORLD";
	char s1[20];
	s_cpy(s1, s2);
	printf("%s\n", s1);
	return 0;
}