#include "lists.h"
#include <stdio.h>

/**
* listint_len - Function returns the number of elements in list.
* @h: Pointer variable to first node
*
* Return: return nodes in the list.
*/

size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		h = h->next;
	}

	return (node);
}
