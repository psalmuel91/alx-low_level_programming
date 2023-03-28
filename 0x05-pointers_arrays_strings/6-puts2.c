#include "main.h"
/**
* puts2 - Program prints every other character starting with the first
* @str: Argument variable pointer to str
*
* Return: return nothing on success
*/

void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (a % 2 == 0)
			_putchar(str[a]);
	}

	_putchar('\n');
}
