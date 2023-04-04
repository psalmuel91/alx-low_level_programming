#include "main.h"
/**
* _strspn - function gets the length of a prefix substring
* @s: Argument pointer variable holds string
* @accept: Argument pointer variable to character
* Return: int
*/
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j, cmpr = 0;

	for (; s[i] >= '\0'; i++)
	{
		for (j = 0; accept[j] > '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				cmpr++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			break;
		}
	}
	return (cmpr);
}
