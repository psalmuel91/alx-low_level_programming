#include "main.h"

/**
* _abs - return absolute values
* @num: contains characters to print
* Return: return (0) Success
*/

int _abs(int num)
{
	if (num < 0)
	{
		return (num * (-1));
	}
	else if (num == 0)
	{
		return (0);
	}
	else
	{
		return (num);
	}
}
