#include "main.h"

/**
* _strchr - function locates a character in a string
* @s: Argument pointer
* @c: Argument pointer
* @n: Argument variable n holds integer size
*
*Return: return s
*/

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
