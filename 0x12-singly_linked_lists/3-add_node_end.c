#include "lists.h"
#include <string.h>

/**
* add_node_end - Function adds a new node at the end
*                of a list_t list.
* @head: First node of the list_t list.
* @str: Element of the list_t list.
*
* Return: If the function fails, = NULL.
*         Else = the address of the new element.
*/

list_t *add_node_end(list_t **head, const char *str)
{
	char *str_dup;
	int len;
	list_t *newNode, *lastNode;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	str_dup = strdup(str);
	if (str == NULL)
	{
		free(newNode);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	newNode->str = str_dup;
	newNode->len = len;
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;

	else
	{
		lastNode = *head;
		while (lastNode->next != NULL)
			lastNode = lastNode->next;
		lastNode->next = newNode;
	}

	return (*head);
}
