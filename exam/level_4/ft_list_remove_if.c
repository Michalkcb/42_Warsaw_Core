/*
Assignment name  : ft_list_remove_if
Expected files   : ft_list_remove_if.c
Allowed functions: free
--------------------------------------------------------------------------------

Write a function called ft_list_remove_if that removes from the
passed list any element the data of which is "equal" to the reference data.

It will be declared as follows :

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)());

cmp takes two void* and returns 0 when both parameters are equal.

You have to use the ft_list.h file, which will contain:

$>cat ft_list.h
typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;
$>
*/
#include "ft_list.h"
#include <stdlib.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*current;
	t_list	*previous;
	t_list	*temp;

	previous = NULL;
	current = *begin_list;

	while (current)
	{
		if (cmp(current->data, data_ref) == 0)
		{
			temp = current;
			if (previous == NULL) // usuwanie pierwszego elementu
				*begin_list = current->next;
			else
				previous->next = current->next;
			free(temp->data); // zwolnienie pamięci danych
			// free(temp);       // zwolnienie pamięci węzła
			current = (previous == NULL) ? *begin_list : previous->next;
		}
		else
		{
			previous = current;
			current = current->next;
		}
	}
}
//--------------------------------------------------------------------------------------------------------
int cmp(void *a, void *b)
{
    return (*(int *)a - *(int *)b);
}

#include <stdio.h>


// Funkcja drukująca elementy listy
void ft_printlist(t_list *lst)
{
	while (lst)
	{
		printf("data: %d\n", *(int *)lst->data);
		lst = lst->next;
	}
}

// Funkcja tworząca nowy element listy z dynamicznie alokowanymi danymi
t_list *lst_new(int data)
{
	t_list *lst = (t_list *)malloc(sizeof(t_list));
	lst->data = malloc(sizeof(int));
	*(int *)lst->data = data;
	lst->next = NULL;
	return lst;
}

int main(void)
{
	t_list *lst;

	// Tworzenie listy
	lst = lst_new(5);
	lst->next = lst_new(3);
	lst->next->next = lst_new(30);
	lst->next->next->next = lst_new(6);
	lst->next->next->next->next = lst_new(9);
	lst->next->next->next->next->next = lst_new(5);
	lst->next->next->next->next->next->next = lst_new(2);
	lst->next->next->next->next->next->next->next = lst_new(4);

	// Wyświetlenie listy przed usunięciem
	printf("Before removal:\n");
	ft_printlist(lst);

	// Usunięcie elementów równych 5
	int ref = 5;
	ft_list_remove_if(&lst, &ref, cmp);

	// Wyświetlenie listy po usunięciu
	printf("---------------------------------------\n");
	printf("After removal:\n");
	ft_printlist(lst);

	return 0;
}
