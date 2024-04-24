/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_swap.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 13:23:30 by mbany             #+#    #+#             */
/*   Updated: 2024/04/24 13:44:58 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

int main()
{
    int a = 5;
    int b = 10;
    
    printf("Before swapping:\n");
    printf("a: %d\n", a);
    printf("b: %d\n", b);
    
    ft_swap(&a, &b);
    
    printf("After swapping:\n");
    printf("a: %d\n", a);
    printf("b: %d\n", b);
    
    return 0;
}