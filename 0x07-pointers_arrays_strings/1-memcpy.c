#include "main.h"

/**
* _memcpy - function copies n bytes from memory area src to memory area dest
* @src: Argument pointer to memory add src
* @dest: Argument pointer to memory add dest
* @n: Argument variable n holds integer size
*
*Return: return dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (n > 0)
	{
		dest[i] = src[i];
		n--;
		i++;
	}
	return (dest);
}
