#include "sort.h"

/**
 * print_list - Prints a doubly linked list of integers
 * @list: Pointer to the head of the list
 */
void print_list(const listint_t *list)
{
    const listint_t *current;

    current = list;
    while (current != NULL)
    {
        printf("%d", current->n);
        if (current->next != NULL)
            printf(", ");
        else
            printf("\n");
        current = current->next;
    }
}

