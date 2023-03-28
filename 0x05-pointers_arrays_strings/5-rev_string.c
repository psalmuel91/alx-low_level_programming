#include "main.h"
/**
* rev_string - Program reverses strings
* @s: Argument variable pointer to s
*
* Return: return nothing on success
*/

void rev_string(char *s)
{
	char *f_char, *l_char, c;
	int i;
	int length = 0;

	f_char = s;
	l_char = s;

	/* Count number of characters in the string */
	for (i = 0; s[i]; i++)
	{
		length++;
	}

	for (i = 0; i < length - 1; i++)
	{
		l_char++;
	}

	for (i = 0; i < length / 2; i++)
	{
		c = *l_char;
		*l_char = *f_char;
		*f_char = c;

		f_char++;
		l_char--;
	}
}

