#include "lists.h"
#include <stdio.h>

/**
* print_listint - Function prints all the elements of the list.
* @h: Pointer variable to first node
*
* Return: return nodes in the list.
*/

size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (node);
}
