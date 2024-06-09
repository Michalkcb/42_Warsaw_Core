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

int ft_list_size(t_list *start_list)
{   
    int i = 0;
    while (start_list)
    {
        start_list = start_list->next;
        i++;   
    }
    return (i); 
}


/*
#include <stdio.h>
int main()
{
    t_list el5 = {NULL, "el5"};
    t_list el4 = {&el5, "el4"};
    t_list el3 = {&el4, "el3"};
    t_list el2 = {&el3, "el2"};
    t_list el1 = {&el2, "el1"};
    t_list *list = &el1;
    printf("%d\n", ft_list_size(list));
}
*/