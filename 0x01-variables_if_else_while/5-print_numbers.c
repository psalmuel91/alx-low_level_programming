#include <stdio.h>

/**
* main - Prints single numbers of base 10 starting from 0
*
* Return: return (0) Success
*/

int main(void)
{
	int d = 0;

	while (d <= 9)
	{
		printf("%d", d);
		d++;
	}

	putchar('\n');

	return (0);
}
