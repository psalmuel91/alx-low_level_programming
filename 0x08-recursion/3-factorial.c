#include "main.h"

/**
* factorial - Program computes and return factorial of an int
* @n: Argument pointer to number to process
*
* Return: return -1 If n is lower than 0 to indicate error
*/

int factorial(int n)
{
	/* Establish error handling and base case */
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	/* Recursive call here */
	return (n * factorial(n - 1));
}
