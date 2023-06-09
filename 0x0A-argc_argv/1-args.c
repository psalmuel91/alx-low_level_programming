#include "main.h"
#include <stdio.h>

/**
* main - Program prints number passed into it
* @argc: Number of CL args
* @argv: Array containing the program CL arg
* Return: return (0) success
*/

int main(int argc, char *argv[])
{
	int num;

	if (argc == 1)
		printf("%d\n", argc - 1);
	else
	{
		for (num = 0; *argv; num++, argv++)
			;

		printf("%d\n", num - 1);
	}

	return (0);
}
