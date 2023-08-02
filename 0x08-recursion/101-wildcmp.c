#include "main.h"

/**
* wildcmp - Program compares string for similarity
* @s1: Argument holds string to be compared to
* @s2: Argument holds string with wild character(s)
*
* Return: return 1 if 100% match, otherwise 0
*/

int wildcmp(char *s1, char *s2)
{
	/* Establish error handling and base case */
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	else if (*s1 == *s2)
	{
		/* Recursive call here */
		return (wildcmp(s1 + 1, s2 + 1));
	}
	/* Check for wildcard '*' */
	else if (*s2 == '*')
	{
		if (*s1 == '\0' && *s2 == '*' && *(s2 + 1) != '\0')
		{
			return (0);
		}
		else if (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2))
		{
			return (1);
		}
	}

	return (0);
}
