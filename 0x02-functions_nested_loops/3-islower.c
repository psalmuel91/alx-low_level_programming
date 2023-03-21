#include "main.h"

/**
* _islower - Short description, single line
* @c: contains value to be compared
* Return: return (0) Success
*/

int islower(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

