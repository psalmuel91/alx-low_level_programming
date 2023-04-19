#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - program that performs simple operations
 *
 * @argc: Counts the number of parameters that go into main
 * @argv: Pointer of array of pointers containing strings entering main
 *
 * Return: return -1 if error, otherwise 1, (0) success
 */

int main(int argc, char **argv)
{
	int result;
	int (*func)(int, int);

	if (argc != 4)
		printf("Error\n"), exit(98);

	else if ((argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '*'
	     && argv[2][0] != '/' && argv[2][0] != '%') || strlen(argv[2]) != 1)
		printf("Error\n"), exit(99);

	else if ((argv[2][0] == '/' || argv[2][0] == '%') && (atoi(argv[3]) == 0))
		printf("Error\n"), exit(100);

	func = get_op_func(argv[2]);
	result = func(atoi(argv[1]), atoi(argv[3]));
	printf("%i\n", result);
	return (0);
}
