#include <stdio.h>

/**
* main - Prints combination of number in ascending order separated by comma
*
* Return: return (0) Success
*/

int main(void)
{
	char num = '0';

	while (num <= '9')
	{
		putchar(num);

		if (num != '9')
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}

	putchar('\n');

	return (0);
}
