#include "main.h"

/**
* string_toupper - Program changes all lowercase to uppercase
* @str: Argument pointer variable holds lowercase string
*
* Return: return on success
*/

char *string_toupper(char *str)
{
	int idx;

	for (idx = 0; str[idx] != '\0'; idx++)
	{
		if (str[idx] >= 'a' && str[idx] <= 'z')
		{
			str[idx] = str[idx] - 32;
		}
	}

	return (str);
}
