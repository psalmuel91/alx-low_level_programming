#include "lists.h"

/**
 * list_len: list number of elements in
 *            a linked list_t list.
 * @h: list_t list.
 * @nodes: a counter var for nodes
 *
 * Return: Number of elements in h.
 */
size_t list_len(const list_t *h)
{
	size_t nodes;
	nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}

	return (nodes);
}
