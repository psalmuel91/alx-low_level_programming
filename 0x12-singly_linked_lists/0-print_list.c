#include <stdio.h>
#include "lists.h"

/**
 * print_list: Prints all elements of a list
 * @h: list_t list.
 *
 * Return: Number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nodes;
	nodes = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		nodes++;
	}

	return (nodes);
}
