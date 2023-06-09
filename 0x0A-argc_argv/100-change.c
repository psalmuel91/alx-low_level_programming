#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

/**
* main - program that prints the minimum number of coins
*			to make change for an amount of money
* @argc: Number of CL args
* @argv: Array containing the program CL arg
* Return: return 1 if a non-integer is part
*			of the passed in arguments & 0 otherwise
*/

int main(int argc, char *argv[])
{
	unsigned int num1, count;
	int total;
	char *ptr;
	int centsArray[] = {25, 10, 5, 2};

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
			for (num1 = 0; num1 < sizeof(centsArray[num1]); num1++)
			{
				if (total >= centsArray[num1])
				{
					count += total / centsArray[num1];
					total = total % centsArray[num1];
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
