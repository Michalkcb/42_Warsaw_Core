/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 13:24:54 by mbany             #+#    #+#             */
/*   Updated: 2024/05/24 11:07:32 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : print_bits
Expected files   : print_bits.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a function that takes a byte, and prints it in binary WITHOUT A NEWLINE
AT THE END.

Your function must be declared as follows:

void	print_bits(unsigned char octet);

Example, if you pass 2 to print_bits, it will print "00000010"
*/
#include <unistd.h>

void	print_bits(unsigned char octet)
{
int i = 8;
unsigned char bit = 0;
while ( i--)
{
	bit = (octet << i & 1) + 48;
	write (1,&bit,1);
}
}

int main()
{
	unsigned char octet = 4;
	print_bits(octet);
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