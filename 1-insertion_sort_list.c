#include "sort.h"
/**
 * insertion_sort_list - function that sorts a doubly linked
 * list of integers in ascending order.
 * @list: list sorted
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *up, tmp;

	if (!list || !*list || (*list)->next == NULL)
		return;

	for (up = (*list)->next; up && up->prev; up = up->next)
	{






/**
 * swapS - swaps nodes
 * @head: head
 * @node1: first
 * @node2: second
 */
void swapS(listint_t **head, listint_t *node1, listint_t *node2)
{
	listint_t *prev, *next;

	prev = node1->prev;
	next = node2->next;

	if (prev != NULL
		prev->next = node2;
	else
		*head = node2;

	node1->prev = node2;
	node1->next = next;
	node2->prev = prev;
	node2->next = node1;
	if (next)
		next->prev = node1;
}
