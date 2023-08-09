#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program prints the min number of coins
 * to make change for an amount of money
 * @argc: arg count
 * @argv: arg vector, cli parsed arg
 * Return: 1 if error, otherwise 0
 */

int main(int argc, char *argv[])
{
	int total, count;
	unsigned int idx;
	char *ptr;
	int cents[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	total = strtol(argv[1], &ptr, 10);
	count = 0;

	if (!*ptr)
	{
		while (total > 1)
		{
			for (idx = 0; idx < sizeof(cents[idx]); idx++)
			{
				if (total >= cents[idx])
				{
					count += total / cents[idx];
					total = total % cents[idx];
				}
			}
		}
		if (total == 1)
			count++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", count);
	return (0);
}
