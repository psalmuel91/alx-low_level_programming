#include <stdio.h>

/**
* main - Prints all numbers of base 16 in lowercase using putchar
*
* Return: return (0) Success
*/

int main(void)
{
	char hn = '0', ha = 'a';

	while (hn <= '9')
	{
		putchar(hn);
		hn++;
	}

	while (ha <= 'f')
	{
		putchar(ha);
		ha++;
	}

	putchar('\n');

	return (0);
}
