#include "main.h"
/**
* _isupper - Evaluate if character is uppercase
* @c: argument with character to be checked
*
* Return: return 1 for uppercase or 0 for lowercase.
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
