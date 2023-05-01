#include "lists.h"

/**
* free_listint2 - Function frees a list.
* @head: A pointer to the first node
*/

void free_listint2(listint_t **head)
{
	listint_t *tmpNode;

	if (head == NULL)
		return;

	while (*head)
	{
		tmpNode = (*head)->next;
		free(*head);
		*head = tmpNode;
	}

	head = NULL;
}
