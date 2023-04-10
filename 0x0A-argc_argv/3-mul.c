#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - Program computes and prints multiplication two numbers
* @argc: Argument holds the count of command line arguments
* @argv: Argument pointer to array containing the program cmd line arguments
*
* Return: return (0) on Success, otherwise (1) for error
*/

int main(int argc, char *argv[])
{
	int num, result;

	if (argc <= 2 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		result = 1;

		for (num = 1; num < argc; num++)
		{
			result *= atoi(argv[num]);
		}

		printf("%d\n", result);
	}

	return (0);
}
