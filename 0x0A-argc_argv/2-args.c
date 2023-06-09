#include "main.h"
#include <stdio.h>

/**
 * main - Program prints all arg received
 * @argc: Number of CL args
 * @argv: Array containing the program CL arg
 * Return: return (0) success
 */

int main(int argc, char *argv[])
{
	int num;

	for (num = 0; num < argc; num++)
	{
		printf("%s\n", argv[num]);
	}

	return (0);
}
