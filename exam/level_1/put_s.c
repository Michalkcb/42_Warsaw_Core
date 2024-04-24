/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_s.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:17:10 by mbany             #+#    #+#             */
/*   Updated: 2024/04/24 11:59:42 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void put_s(char *s)
{
	int i = 0;
	while(*s)
		write(1,&s[i++],1);
}

int main()
{
	char s[] = "Michał";
	printf("Hello %s\n", s);
	return (0);
}