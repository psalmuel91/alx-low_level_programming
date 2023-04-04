#include "main.h"

/**
* _memset - Program builds a function that fills memory with a constant byte
* @s: Argument pointer to variable s
* @b: Argument variable b holds a character
* @n: Argument variable n holds integer size
*
*Return: return s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (n > 0)
	{
		s[i] = b;
		n--;
		i++;
	}
	return (s);
}
