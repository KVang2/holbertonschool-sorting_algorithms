#include "sort.h"
/**
 * insertion_sort_list - sorts doubly linked list of integers
 * @list: list of int
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *node, *temp = NULL;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
	{
		exit(EXIT_FAILURE);
		listint_t *node = (*list)->next;
	}
	while (node != NULL)
	{
		listint_t *temp = node;
		int swapped = 0;

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
			swapped = 1;

			print_list(*list);
		}

		if (!swapped)
		{
			node = node->next;
		}
		else
			node = temp->next;
	}
}
