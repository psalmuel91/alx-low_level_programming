#include "lists.h"

/**
* free_listint - Function frees a list.
* @head: A pointer to the first node
*/

void free_listint(listint_t *head)
{
	listint_t *tmpNode;

	while (head)
	{
		tmpNode = head->next;
		free(head);
		head = tmpNode;
	}
}
