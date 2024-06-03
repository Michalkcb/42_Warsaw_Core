/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits_v2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 13:24:54 by mbany             #+#    #+#             */
/*   Updated: 2024/05/03 16:08:04 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : reverse_bits
Expected files   : reverse_bits.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that takes a byte, reverses it, bit by bit (like the
example) and returns the result.

Your function must be declared as follows:

unsigned char	reverse_bits(unsigned char octet);

Example:

  1 byte
_____________
 0010  0110
     ||
     \/
 0110  0100
*/
#include <unistd.h>
#include <stdio.h>

unsigned char reverse_bits(unsigned char octet)
{
    unsigned char reversed = 0;
    unsigned int i = 0;
    while (i < 8)
    {
        if (octet & (1 << i))
        {
            reversed |= (1 << (7 - i));
        }
        i++;
    }
    return reversed;
}


int main()
{
    unsigned char octet = 4;
    printf("Original octet: %u\n", octet);
    printf("Reversed octet: %u\n", reverse_bits(octet));
    return 0;
}

// // C Program to demonstrate
// // use of right-shift operator
// #include <stdio.h>
 
// // Driver code
// int main()
// {
//     // a = 5(00000101), b = 9(00001001)
//     unsigned char a = 5, b = 9;
 
//     // The result is 00000010
//     printf("a>>2 = %d\n", (a >> 2));
 
//     // The result is 00000100
//     printf("b>>1 = %d", (b >> 3));
 
//     return 0;
// }