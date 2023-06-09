#include "main.h"
/**
* _strlen - Program computes length of strings
* @s: argument pointer to variable s
*
* Return: return nothing on success
*/

int _strlen(char *s)
{
	int u;

	u = 0;
	while (s[u] != '\0')
	{
		u++;
	}
	return (u);
}
