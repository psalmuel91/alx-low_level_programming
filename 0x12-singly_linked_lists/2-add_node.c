#include "lists.h"
#include <string.h>

/**
* add_node -  Function adds a new node at the beginning
*            of a list_t list.
* @head: First node of the list_t list.
* @str: Element of the list_t list.
*
* Return: If the function fails, = NULL.
*         Else = the address of the new element.
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	char *str_dup;
	int len;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	str_dup = strdup(str);
	if (str_dup == NULL)
	{
		free(newNode);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	newNode->str = str_dup;
	newNode->len = len;
	newNode->next = *head;

	*head = newNode;

	return (newNode);
}
