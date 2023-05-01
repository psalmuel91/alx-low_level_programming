#include "lists.h"

/**
* reverse_listint - Function deletes the node at an index in list
* @head: Pointer to pointer to first node in the list
*
* Return: return NULL if node doesn't exit.
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptrTonext, *ptrToprev;

	if (head == NULL || *head == NULL)
		return (NULL);

	ptrToprev = NULL;

	while ((*head)->next != NULL)
	{
		ptrTonext = (*head)->next;
		(*head)->next = ptrToprev;
		ptrToprev = *head;
		*head = ptrTonext;
	}

	(*head)->next = ptrToprev;

	return (*head);
}
