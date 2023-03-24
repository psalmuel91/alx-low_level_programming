#include <stdio.h>

/**
* main - entry point "Fizz-Buzz test"
*
* Return: void - return (0) Success
*/

int main(void)
{
	int num = 100;
	int i;

	i = 1;
	while (i <= num)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			if (i < num)
			{
				printf("Buzz ");
			}
			else
			{
				printf("Buzz");
			}
		}
		else
		{
			printf("%i ", i);
		}

		i++;

	}
	printf("\n");
	return (0);
}
