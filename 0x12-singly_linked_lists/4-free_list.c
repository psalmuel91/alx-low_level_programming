#include "lists.h"
#include <stdlib.h>

/**
* free_list - Function frees a list_t list.
* @head: First node of list_t list.
*/

void free_list(list_t *head)
{
	list_t *tmpNode;

	while (head)
	{
		tmpNode = head->next;
		free(head->str);
		free(head);
		head = tmpNode;
	}
}
