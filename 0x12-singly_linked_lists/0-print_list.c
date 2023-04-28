#include "lists.h"
#include <stdio.h>

/**
* print_list: Print all elements of a list_t list.
* @h: Element of list_t.
*
* Return: Number of nodes in list h
*/

size_t print_list(const list_t *h)
{
	size_t node;

	node = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		node++;
	}

	return (node);
}
