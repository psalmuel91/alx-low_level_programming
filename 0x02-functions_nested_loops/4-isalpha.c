#include "main.h"

/**
* _isalpha - checks alphabetic character
* @c: contains integer to print
* Return: return (0) Success
*/

int _isalpha(int c)

{
	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
	{
	return (1);
	}
	else
	{
	return (0);
	}

}

