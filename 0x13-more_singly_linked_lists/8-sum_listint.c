#include "lists.h"

/**
* sum_listint - Function returns sum nth node data of a list
* @head: Pointer to first node in the list
*
* Return: return 0 if list is empty
*/

int sum_listint(listint_t *head)
{
	int nodeSum = 0;

	while (head)
	{
		nodeSum = nodeSum + head->n;
		head = head->next;
	}

	return (nodeSum);
}
