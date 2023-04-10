#include <stdio.h>
#include "main.h"

/**
* main - Program builds a function that fills memory with a constant byte
* @argc: Argument holds the count of command line arguments
* @argv: Argument pointer to array containing the program cmd line arguments
*
*Return: return (0) on Success.
*/

int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
