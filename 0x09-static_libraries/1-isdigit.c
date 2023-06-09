#include "main.h"
/**
* _isdigit - Evaluates a character to a digit or not
* @c: Holds character to be checked
*
* Return: returns 1 if it's digit or 0 otherwise.
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
