#include "lists.h"

/**
* insert_nodeint_at_index - Function inserts a new node at
*							given position in a list.
* @head: Pointer to the pointer of first node.
* @idx: Index of nodes on list.
* @n: Variable holds integer.
*
* Return: return NULL if adding is not possible.
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *copyNode = *head;
	unsigned int node;

	node = 0;
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = copyNode;
		*head = newNode;
		return (newNode);
	}

	while (node < (idx - 1))
	{
		if (copyNode == NULL || copyNode->next == NULL)
			return (NULL);

		copyNode = copyNode->next;
		node++;
	}

	newNode->next = copyNode->next;
	copyNode->next = newNode;

	return (newNode);
}
