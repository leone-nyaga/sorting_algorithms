#include "sort.h"

/**
 * cocktail_sort_list - Sorts a doubly linked list of integers
 *                     in ascending order using Cocktail Shaker Sort.
 * @list: A pointer to a pointer to the head of the list.
 */
void cocktail_sort_list(listint_t **list)
{
	int swapped;
	listint_t *current;
	listint_t *end = NULL;

	if (list == NULL || *list == NULL)
		return;
	do {
		swapped = 0;
		current = *list;
		while (current->next != end)
		{
			if (current->n > current->next->n)
			{
				swap_nodes(current, current->next, list);
				swapped = 1;
				print_list(*list);
			}
			else
				current = current->next;
		}
		if (swapped == 0)
			break;
		swapped = 0;
		end = current;
		while (current->prev != NULL)
		{
			if (current->n < current->prev->n)
			{
				swap_nodes(current->prev, current, list);
				swapped = 1;
				print_list(*list);
			}
			else
				current = current->prev;
		}
	} while (swapped);
}

/**
 * swap_nodes - Swaps two nodes in a doubly linked list.
 * @node1: First node to swap.
 * @node2: Second node to swap.
 * @list: A pointer to a pointer to the head of the list.
 */
void swap_nodes(listint_t *node1, listint_t *node2, listint_t **list)
{
	if (node1->prev != NULL)
		node1->prev->next = node2;
	else
		*list = node2;
	if (node2->next != NULL)
		node2->next->prev = node1;
	node1->next = node2->next;
	node2->prev = node1->prev;
	node1->prev = node2;
	node2->next = node1;
}
