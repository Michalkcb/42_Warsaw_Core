/*
Assignment name  : ft_list_foreach
Expected files   : ft_list_foreach.c, ft_list.h
Allowed functions:
--------------------------------------------------------------------------------

Write a function that takes a list and a function pointer, and applies this
function to each element of the list.

It must be declared as follows:

void    ft_list_foreach(t_list *begin_list, void (*f)(void *));

The function pointed to by f will be used as follows:

(*f)(list_ptr->data);

You must use the following structure, and turn it in as a file called
ft_list.h:

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

*/
#include "ft_list_foreach.h"
void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	while(begin_list)
	{
		(*f)(begin_list->data);
		begin_list = begin_list -> next;
	}
}
#include <unistd.h>
#include <stdio.h>
void print_element(void *data)
{
    printf("%s", (char *)data);
}

int main ()
{
	t_list node1, node2, node3, node4;
	node1.data = "1";
	node2.data = "2";
	node3.data = "3";
	node4.data = "4";

	node1.next = &node2;
	node2.next = &node3;
	node3.next = &node4;
	node4.next = NULL;

	ft_list_foreach(&node1, print_element);

	return 0;

}