#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
* main - Program computes and prints the sum of positive numbers
* @argc: Argument holds the count of command line arguments
* @argv: Argument pointer to array containing the program cmd line arguments
*
* Return: return (0) on Success, otherwise (1) for error
*/

int main(int argc, char *argv[])
{
	int i, j, length, sumOfPosit = 0;
	char *ptr;

	if (argc < 2)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			ptr = argv[i];
			length = strlen(ptr);

			for (j = 0; j < length; j++)
			{
				if (isdigit(*(ptr + j)) == 0)
				{
					printf("Error\n");

					return (1);
				}
			}

			sumOfPosit += atoi(argv[i]);
		}

		printf("%d\n", sumOfPosit);
	}

	return (0);
}
