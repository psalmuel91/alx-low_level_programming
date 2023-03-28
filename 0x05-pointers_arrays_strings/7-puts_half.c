#include "main.h"
/**
* puts_half - Program prints every other half of string character
* @str: Argument variable pointer to str
*
* Return: return nothing on success
*/

void puts_half(char *str)
{
	int i, o_half;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	o_half = (i + 1) / 2;

	for (i = o_half; str[i]; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
