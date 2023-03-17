#include <stdio.h>

/**
* main - Prints all alphabets except q and e
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
