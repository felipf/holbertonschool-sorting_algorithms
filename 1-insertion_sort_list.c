#include "sort.h"
/**
 * insertion_sort_list - function that sorts a doubly linked
 * list using insertion sort.
 * @list: dll
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *check, *iterator, *anterior;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	iterator = (*list)->next;

	while (iterator != NULL)
	{
		check = iterator;
		while (check->prev != NULL && check->n < check->prev->n)
		{
			anterior = check->prev;
			anterior->next = check->next;

			if (check->next != NULL)
				check->next->prev = anterior;

			check->next = anterior;
			check->prev = anterior->prev;
			anterior->prev = check;

			if (check->prev == NULL)
				*list = check;
			else
				check->prev->next = check;

			print_list(*list);
		}
		iterator = iterator->next;
	}
}
