#include <stdio.h>

/**
* main - Prints single numbers of base 10 starting from 0 using putchar
*
* Return: return (0) Success
*/

int main(void)
{
	int d = '0';

	while (d <= '9')
	{
		putchar(d);
		d++;
	}

	putchar('\n');

	return (0);
}
