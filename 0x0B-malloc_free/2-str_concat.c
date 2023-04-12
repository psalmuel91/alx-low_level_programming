#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
* str_concat - Program is a function that concatenate two strings
* @s1: Argument pointer holds string
* @s2: Argument pointer holds string
*
* Return: return nothing if base case
*/

char *str_concat(char *s1, char *s2)
{
	int strl1 = 0, strl2 = 0, idx = 0, i;
	char *string, *nul = "";

	if (s1 == NULL)
		s1 = nul;
	else if (s2 == NULL)
		s2 = nul;

	while (*(s1 + strl1))
		strl1++;
	while (*(s2 + strl2))
		strl2++;

	string = malloc(sizeof(char) * (strl1 + strl2 + 1));

	if (string == 0)
		return (0);

	for (idx = 0; idx < strl1; idx++)
		*(string + idx) = *(s1 + idx);

	for (idx = 0, i = strl1; idx <= strl2; i++, idx++)
		*(string + i) = *(s2 + idx);

	return (string);
}
