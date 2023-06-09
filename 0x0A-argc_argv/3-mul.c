#include "main.h"
#include <stdio.h>

/**
* main - Program that multiplies two numbers.
* @argc: Number of CL args
* @argv: Array containing the program CL arg
* Return: return (0) success
*/

int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num2 = 1;

		for (num1 = 1; num1 < 3; num++)
		num2 *= atoi(argv[num1]);

		printf("%d\n", num2);
	}

	return (0);
}
