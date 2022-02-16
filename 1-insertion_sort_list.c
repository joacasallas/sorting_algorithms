#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list in ascending
 * order using the Insertion sort algorithm
 * @list: linked list with numbers to order
 * Return: Nothing
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *temp;

	if (list != NULL || (*list)->next != NULL)
	{
		while ((*list)->next != NULL)
		{
			if ((*list)->n > list->next->n)
			{
				temp->n = (*list)->n;
				(*list)->n = (*list)->next->n;
				(*list)->next->n = temp->n;
				if ((*list)->n < (*list)->prev->n)
				{
					temp->n = (*list)->n;
					(*list)->n = (*list)->prev->n;
					(*list)->prev->n = temp->n;
				}
			}
		}
	}
}
