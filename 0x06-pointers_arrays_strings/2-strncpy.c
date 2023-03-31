#include "main.h"

/**
* _strncpy - Program copies strings
* @src: Argument pointer variable holds source of string
* @dest: Argument pointer variable holds destination of concatenated str
* @n: Argument variable of n-byte size
*
* Return: returns concatenated strings
*/

char *_strncpy(char *dest, char *src, int n)
{
	int src_s = 0;

	while (src_s < n && src[src_s] != '\0')
	{
		dest[src_s] = src[src_s];
		src_s++;
	}

	while (src_s < n)
	{
		dest[src_s] = '\0';
		src_s++;
	}

	return (dest);
}
