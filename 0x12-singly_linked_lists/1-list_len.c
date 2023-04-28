#include "lists.h"

/**
* list_len - Function returns the number of elements
*            in a linked list_t list.
* @h: Holds a list_t list.
*
* Return: return node with elements in list h.
*/

size_t list_len(const list_t *h)
{
	size_t node;

	node = 0;
	while (h != NULL)
	{
		h = h->next;
		node++;
	}

	return (node);
}
