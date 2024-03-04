/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 13:46:06 by mbany             #+#    #+#             */
/*   Updated: 2024/03/04 16:12:46 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_memchr function searches for the first occurrence of a specific
** character in a memory block.
**
** Parameters:
** str - A pointer to the memory block.
** c - The character to be searched for.
** n - The number of bytes to search within the memory block.
**
** Return:
** A pointer to the first occurrence of the character in the memory block.
** NULL if the character is not found.
**
** Description:
** The ft_memchr function takes a pointer to the memory block 'str', an integer
** 'c' which represents a character, and a size_t 'n' which specifies the
** number of bytes to search within the memory block. It enters a loop that
** iterates 'n' times, decrementing 'n' in each iteration. In each
** iteration, it checks if the current byte in the memory block, accessed by
** casting 'str' to an unsigned char pointer, is equal to the character 'c'
** being searched for. If a match is found, it returns a pointer to that
** byte in the memory block. If no match is found until the end of the loop,
** it means the character 'c' is not present in the memory block, so it returns
** NULL.
**
** Example:
** char s[] = {0, 1, 2 ,3 ,4 ,5};
**
** ft_memchr(s, 0, 0);
** (returns NULL as we are searching for character 0 in an empty memory block)
**
** ft_memchr(s, 2, 3);
** (returns a pointer to the byte at index 2 as we are searching for character
** 2 in the first 3 bytes of the memory block)
*/
void	*ft_memchr(void const *str, int c, size_t n)
{
	while (n--)
	{
		
	}
	return (NULL)
}
