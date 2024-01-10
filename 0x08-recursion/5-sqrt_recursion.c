#include "main.h"

/**
* _rootDef - Program computes and return value of sqrt
* @x: Argument holds value of integer to be processed
* @y: Argument holds value of root
*
* Return: return -1 If x is not a natural number with sqrt
*/

int _rootDef(int x, int y)
{
	/* Establish error handling and base case */
	if (x == 0 || x == 1)
	{
		return (x);
	}
	else if (y * y > x)
	{
		return (-1);
	}
	else if (y * y == x)
	{
		return (y);
	}
	/* Recursive call here */
	return (_rootDef(x, y + 1));
}

/**
* _sqrt_recursion - Program computes and return value of sqrt
* @n: Argument holds value of integer to be processed
*
* Return: return -1 If n is not a natural number with sqrt
*/

int _sqrt_recursion(int n)
{
	return (_rootDef(n, 1));
}
