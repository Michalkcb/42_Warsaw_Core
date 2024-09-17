/*
Assignment name  : ft_list_size
Expected files   : ft_list_size.c, ft_list.h
Allowed functions:
--------------------------------------------------------------------------------

Write a function that returns the number of elements in the linked list that's
passed to it.

It must be declared as follows:

int	ft_list_size(t_list *begin_list);

You must use the following structure, and turn it in as a file called
ft_list.h:

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;
*/
#include "ft_list.h"
int	ft_list_size(t_list *begin_list)
{
	int i = 0;
	while (begin_list)
	{
		begin_list = begin_list -> next;
		i++;
	}
	return(i);
}
#include <stdio.h>
int main ()
{
	// t_list el2 = {NULL, "el1"};
	// t_list el1 = {&el2, "el1"};
	// t_list *list = &el1;

	t_list node1, node2, node3, node4;
	node1.data = "1";
	node2.data = "2";
	node3.data = "3";
	node4.data = "4";
	t_list *list = &node1;

	node1.next = &node2;
	node2.next = &node3;
	node3.next = &node4;
	node4.next = NULL;

	printf("%d\n", ft_list_size(list));	
}