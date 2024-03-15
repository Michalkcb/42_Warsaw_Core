/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:38:34 by mbany             #+#    #+#             */
/*   Updated: 2024/03/15 11:58:39 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

// int main()
// {
// 	char *d[10];
// 	char *s = "sagdfg";
// 	char *result = ft_memcpy(d, s, 5);
// 	printf("%s\n", result);
// }
// #include <stdlib.h>
// #include <unistd.h>
// #include <string.h>
// int		main(int argc, const char *argv[])
// {
// 	void	*mem;
// 	int		arg;
// 	alarm(5);
// 	if (!(mem = malloc(sizeof(*mem) * 30)) || argc == 1)
// 		return (0);
// 	memset(mem, 'j', 30);
// 	if ((arg = atoi(argv[1])) == 1)
// 	{
// 		if (mem != ft_memcpy(mem, "zyxwvutsrqponmlkjihgfedcba", 14))
// 			write(1, "dest's adress was not returned\n", 31);
// 		write(1, mem, 30);
// 	}
// 	else if (arg == 2)
// 	{
// 		if (mem != ft_memcpy(mem, "zyxwvutst", 0))
// 			write(1, "dest's adress was not returned\n", 31);
// 		write(1, mem, 30);
// 	}
// 	else if (arg == 3)
// 	{
// 		if (mem != ft_memcpy(mem, "zy\0xw\0vu\0\0tsr", 11))
// 			write(1, "dest's adress was not returned\n", 31);
// 		write(1, mem, 30);
// 	}
// 	return (0);
// }
