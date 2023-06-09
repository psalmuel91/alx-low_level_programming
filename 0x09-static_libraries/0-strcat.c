#include "main.h"

/**
* _strcat - Program concatenates two strings
* @src: Argument pointer variable holds source of string
* @dest: Argument pointer variable holds destination of concatenated str
*
* Return: returns concatenated strings
*/

char *_strcat(char *dest, char *src)
{
	int src_s = 0;
	int dest_s = 0;

	while (dest[dest_s] != '\0')
		dest_s++;

	while (src[src_s] != '\0')
	{
		dest[dest_s] = src[src_s];
		src_s++;
		dest_s++;
	}

	dest[dest_s] = '\0';

	return (dest);
}
