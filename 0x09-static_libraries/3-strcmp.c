#include "main.h"

/**
* _strcmp - Program copies strings
* @s1: Argument pointer variable holds first string
* @s2: Argument pointer variable holds second string
*
* Return: returns 0 if true
*/

int _strcmp(char *s1, char *s2)
{
	char *f_string = s1;
	char *s_string = s2;

	while (*f_string != '\0' && *s_string != '\0' && *f_string == *s_string)
	{
		f_string++;
		s_string++;
	}

	return (*f_string - *s_string);
}
