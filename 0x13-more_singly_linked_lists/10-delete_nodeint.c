#include "lists.h"

/**
* delete_nodeint_at_index - Function deletes the node at an index in list
* @head: Pointer to pointer to first node in the list
* @index: Index to nodes on list.
*
* Return: return (1) Success else (-1)
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmpNode, *copyNode = *head;
	unsigned int node;

	node = 0;

	if (copyNode == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(copyNode);
		return (1);
	}

	while (node < (index - 1))
	{
		if (copyNode->next == NULL)
			return (-1);

		copyNode = copyNode->next;
		node++;
	}

	tmpNode = copyNode->next;
	copyNode->next = tmpNode->next;
	free(tmpNode);
	return (1);
}
