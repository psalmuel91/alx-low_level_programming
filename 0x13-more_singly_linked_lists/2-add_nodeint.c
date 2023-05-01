#include "lists.h"

/**
* add_nodeint - Function adds a new node at the beginning of list.
* @head: Pointer to the pointer of first node.
* @n: Variable holds integer.
*
* Return: return the address of the newNode element.
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;

	*head = newNode;

	return (newNode);
}
