#include "lists.h"

/**
* get_nodeint_at_index - Function returns nth node of a list
* @head: Pointer to first node in the list
* @index: Index to nodes on list.
*
* Return: return NULL if node doesn't exit.
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	node = 0;
	while (node < index)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
		node++;
	}

	return (head);
}
