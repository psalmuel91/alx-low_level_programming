#include "main.h"

/**
* _prime_def - Program computes and return prime number
* @x: Argument holds value of integer to be processed
* @y: Argument holds value of root
*
* Return: return 1 if prime, otherwise 0
*/

int _prime_def(int x, int y)
{
	/* Establish error handling and base case */
	if (x == y)
	{
		return (1);
	}
	else if (x <= 1 || x % y == 0)
	{
		return (0);
	}
	/* Recursive call here */
	return (_prime_def(x, y + 1));
}

/**
* is_prime_number - Program computes and return prime num
* @n: Argument holds value of integer to be processed
*
* Return: return 1 if prime, otherwise return 0
*/

int is_prime_number(int n)
{
	return (_prime_def(n, 2));
}
