#include "main.h"
/**
* _puts - Program prints a string to stdout
* @str: Argument variable pointer to s
*.
* Return: return nothing on success
*/

void _puts(char *str)
{
	char *c;
	int m;

	c = str;

	for (m = 0; c[m]; m++)
	{
		_putchar (c[m]);
	}
	_putchar('\n');
}
