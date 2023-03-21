#include <stdio.h>

/**
* main - Prints combination in pairs
*
* Return: return (0) Success
*/

int main(void)
{
	int c, d;

	for (c = 0; c <= 99; c++)
	{
		for (d = 0; d <= 99; d++)
		{
			if (c < d && c != d)
			{
				putchar((c / 10) + '0');
				putchar((c % 10) + '0');
				putchar(' ');
				putchar((d / 10) + '0');
				putchar((d % 10) + '0');
				if (c != 98 || d != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);

}
