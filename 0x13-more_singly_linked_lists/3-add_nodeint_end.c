#include "lists.h"

/**
* add_nodeint_end - Function adds a new node at the end of list.
* @head: Pointer to the pointer of first node.
* @n: Variable holds integer.
*
* Return: return the address of the newNode element.
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *last;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = newNode;
	}

	return (*head);
}
