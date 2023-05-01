#include "lists.h"

/**
* pop_listint - Function deletes head node of a list.
* @head: A pointer to the first node
*
* Return: return 0 if list is empty
*/

int pop_listint(listint_t **head)
{
	listint_t *tmpNode;
	int hdNodeData;

	if (*head == NULL)
		return (0);

	tmpNode = *head;
	hdNodeData = (*head)->n;
	*head = (*head)->next;

	free(tmpNode);

	return (hdNodeData);
}
