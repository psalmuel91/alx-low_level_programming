#include <stdio.h>

/**
* main - Prints lower case and upper case alphabets
*
* Return: return (0) Success
*/

int main(void)
{
	char l = 'a', u = 'A';

	while (l <= 'z')
	{
		putchar(l);
		l++;
	}

	while (u <= 'Z')
	{
		putchar(u);
		u++;
	}

	putchar('\n');

	return (0);
}
