#include "main.h"
#include <stdio.h>

/**
* main - Program that adds positive numbers.
* @argc: Number of CL args
* @argv: Array containing the program CL arg
* Return: return 1 if a non-integer is part
*			of the passed in arguments & 0 otherwise
*/

int main(int argc, char *argv[])
{
	int num1, num2, len, sum;
	char *ptr;

	if (argc < 2)
	printf("0\n");
	else
	{
		sum = 0;
		for (num1 = 1; num1 < argc; num1++)
		{
			ptr = argv[num1];
			len = strlen(ptr);

			for (num2 = 0; num2 < len; num2++)
			{
				if (isdigit(*(ptr + num2)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(argv[num]);
		}

		printf("%d\n", sum);
	}

	return (0);
}
