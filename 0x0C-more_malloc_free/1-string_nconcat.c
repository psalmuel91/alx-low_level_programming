#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* string_nconcat - Program defines a function that concatenate strings
* @n: Argument variable holds status integer
* @s1: Argument pointer variable holds string
* @s2: Argument pointer variable holds string
*
* Return: returns address
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int strl1, strl2, idx, i;
	char *str;

	/*treat NULL as empty string*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	strl1 = strl2 = 0;

	/*length of both s1 & s2 respectively*/
	while (s1[strl1] != '\0')
		strl1++;
	while (s2[strl2] != '\0')
		strl2++;

	/*set n to length of s2*/
	if (n >= strl2)
		n = strl2;

	str = (char *) malloc((strl1 + n + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	/*add s1 to str*/
	for (idx = 0; s1[idx] != '\0'; idx++)
		str[idx] = s1[idx];

	/*add s2 n bytes to str*/
	for (i = 0; i < n && s2[i] != '\0'; i++)
	{
		str[idx] = s2[i];
		idx++;
	}
	str[idx] = '\0';
	return (str);
}
