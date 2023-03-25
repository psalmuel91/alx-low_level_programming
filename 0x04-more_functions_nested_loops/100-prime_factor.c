#include <stdio.h>

/**
 * main - Entry point, program finds and prints the largest prime factor of number
 *
 * Return: return (0) Success
 */

int main(void)
{
	long int num, i;

	num = 612852475143;
	for (i = 2; i < num; i++)
	{
		while (num % i == 0)
			num = num / i;
	}

	printf("%lu\n", num);

	return (0);
}
