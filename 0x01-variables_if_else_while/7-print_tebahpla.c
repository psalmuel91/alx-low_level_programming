#include <stdio.h>

/**
* main - Prints all lower case alphabets in reverse order
*
* Return: return (0) Success
*/

int main(void)
{
	char l = 'z';

	while (l >= 'a')
	{
		putchar(l);
		--l;
	}

	putchar('\n');

	return (0);
}
