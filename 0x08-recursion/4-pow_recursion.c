#include "main.h"

/**
* _pow_recursion - Program computes and return value of power
* @x: Argument holds value of based integer
* @y: Argument holds value of raised power
*
* Return: return -1 If y is lower than 0 to indicate error
*/

int _pow_recursion(int x, int y)
{
	/* Establish error handling and base case */
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	/* Recursive call here */
	return (x * _pow_recursion(x, y - 1));
}
