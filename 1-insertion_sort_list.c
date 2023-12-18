#include "sort.h"
/**
 * insertion_sort_list - sorts doubly linked list of integers
 * @list: list of int
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *node;
	listint_t *temp = NULL;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
	{
		return;
	}

	node = *list;

	while (node != NULL)
	{
		temp = node;

		while (temp->prev != NULL && temp->n < temp->prev->n)
		{
			if (temp->next != NULL)
			temp->next->prev = temp->prev;

			temp->prev->next = temp->next;
			temp->next = temp->prev;
			temp->prev = temp->prev->prev;
			temp->next->prev = temp;

			if (temp->prev != NULL)
			{
			temp->prev->next = temp;
			}
			else
			{
				*list = temp;
			}
			print_list(*list);
		}
			node = temp->next;
	}
}
