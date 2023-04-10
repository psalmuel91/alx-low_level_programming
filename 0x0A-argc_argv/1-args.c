#include <stdio.h>
#include "main.h"

/**
* main - Program that prints the number of arguments passed into it.
* @argc: Argument holds the count of command line arguments
* @argv: Argument pointer to array containing the program cmd line arguments
*
* Return: return (0) on Success.
*/

int main(int argc, char *argv[])
{
	int num;

	if (argc == 1)
	{
		printf("%d\n", argc - 1);
	}
	else
	{
		for (num = 0; *argv; argv++, num++)
			;

		printf("%d\n", num - 1);
	}
	return (0);
}
