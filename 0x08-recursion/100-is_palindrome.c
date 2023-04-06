#include "main.h"

/**
* _str_count - Program counts numb of char and return count
* @x: Argument holds address of string to be processed
* @y: Argument holds count value
*
* Return: return -1 if error, otherwise 0
*/

int _str_count(char *x, int y)
{
	/* Establish error handling and base case */
	if (*x == '\0')
	{
		return (y - 1);
	}
	/* recursive call here */
	return (_str_count(x + 1, y + 1));
}

/**
* _str_compare - Program compares string for similarity
* @x: Argument holds address of string to be processed
* @y: Argument holds count value
*
* Return: return 1 if 100% match, otherwise 0
*/

int _str_compare(char *x, int y)
{
	/* Establish error handling and base case */
	if (*x != *(x + y))
	{
		return (0);
	}
	else if (*x == '\0')
	{
		return (1);
	}
	else
		/* Recursive call here */
		return (_str_compare(x + 1, y - 2));
}

/**
* is_palindrome - Program checks for palindrome and return int
* @s: Argument holds string to be processed
*
* Return: return 1 if palindrome, otherwise return 0
*/

int is_palindrome(char *s)
{
	int y;

	y = _str_count(s, 0);
	return (_str_compare(s, y));
}
