#include "main.h"

/**
* main - Prints alphabets followed by a newline
*
* Return: return (0) Success
*/

void print_alphabet(void)
{
	int alphabet;

	for (alphabet = 97; alphabet <= 122; alphabet++)
	{
		_putchar(alphabet);
	}

	_putchar('\n');
}
