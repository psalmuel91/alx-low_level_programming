#include "main.h"
#include <stdio.h>
/**
* _strstr - Program is a function that locates a substring.
* @haystack: Argument pointer to string
* @needle: Argument pointer to marker
* Return: return (pointer)
*/
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] > '\0'; i++)
	{
		for (j = i; haystack[j] > '\0' && needle[j - i] > '\0'; j++)
		{
			if (haystack[j] != needle[j - i])
			{
				break;
			}
		}

		if (needle[j - i] == '\0')
		{
			return (haystack + i);
		}
	}

	return (0);
}
