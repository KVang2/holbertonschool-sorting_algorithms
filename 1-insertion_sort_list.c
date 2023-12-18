#include "sort.h"
/**
 * insertion_sort_list - sorts doubly linked list of integers
 * @list: list of int
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *sort = NULL;
	listint_t *temp = *head;

	while (temp != NULL)
	{
		listint_t *next = temp->next;

	if (sort == NULL || sort->data >= current->data)
	{
		if (sort != NULL)
		{
			sort->prev = current;
		}
		sort = current;
	}
	else
	{
		listint_t *temp = sort;

		while (temp->next != NULL && temp->next->data < current->data)
		{
			temp = temp->next;
		}
		current->next  = temp->next;
		if (temp->next != NULL)
		{
			temp->next = current;
		}
		temp->next = current;
		current->prev = temp;
	}
	current = next;
	}
	*head = sort;
}
