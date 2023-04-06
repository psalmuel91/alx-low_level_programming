#include "main.h"

/**
* _strlen_recursion - Program computes and print length of str
* @s: Argument pointer to string to be processed
*
* Return: return nothing if base case
*/

int _strlen_recursion(char *s)
{
	/* Establish a base case */
	if (*s != '\0')
	{
		/* Recursive call here */
		return (1 + _strlen_recursion(s + 1));
	}

	return (0);
}
