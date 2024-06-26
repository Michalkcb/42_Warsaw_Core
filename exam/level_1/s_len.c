/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_len.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 13:13:25 by mbany             #+#    #+#             */
/*   Updated: 2024/04/24 13:21:30 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int s_len(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

int main()
{
	char s[] = "abcd";
	s_len(s);
	printf("%s\n", s);
}