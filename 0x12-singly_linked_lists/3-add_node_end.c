#include "lists.h"
#include <string.h>

/**
 * add_node_end - Adds a new node at the end
 *                of list_t list.
 * @head: Points to list_t list head
 * @str: String to the list_t list.
 *
 * Return: If the function fails, = NULL.
 *         Else = the address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *duplic;
	int len;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	duplic = strdup(str);
	if (str == NULL)
	{
		free(new);

		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = duplic;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}
