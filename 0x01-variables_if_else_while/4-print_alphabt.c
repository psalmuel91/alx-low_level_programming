#include <stdio.h>

/**
* main - Prints lower case and upper case alphabets
*
* Return: return (0) Success
*/

int main(void)
{
	char l = 'a';

	while (l <= 'z')
	{
		if (l != 'e' && l != 'q')
		{
			putchar(l);
		}
		l++;
	}

	putchar('\n');

	return (0);
}
