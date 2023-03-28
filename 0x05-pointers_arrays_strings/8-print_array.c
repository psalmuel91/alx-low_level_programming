#include "main.h"
#include <stdio.h>

/**
* print_array - Program prints n elements of an array of integers ff by , sp
* @a: Argument variable pointer to a
* @n: Variable holds n values to be printed
*
* Return: return nothing on success
*/

void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}

		i++;
	}

	printf("\n");
}
