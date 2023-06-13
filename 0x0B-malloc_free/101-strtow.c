#include "main.h"
#include <stdlib.h>

/**
* cpchars_inBuffer - Loads chars in buffer
* @buff: Storage Buffer
* @fstChar: First character pointer
* @endln: End of line character pointer
*/

void cpchars_inBuffer(char *buff, char *fstChar, char *endln)
{
	while (fstChar <= endln)
		*buff++ = *fstChar++;
	*buff = 0;
}

/**
* word_count - Function counts the number of words
* @str: Strings to break
*
* Return: Integer value of number of words
*/

int word_count(char *str)
{
	unsigned int words = 0, isWord = 0;

	while (1)
	{
		if (*str == ' ' || !*str)
		{
			if (isWord)
				words++;
			isWord = 0;
			if (!*str)
				break;
		}
		else
			isWord++;
		str++;
	}

	return (words);
}

/**
* strtow - Program is a function that splits string into words
* @str: String to split
*
* Return: return pointer to string array
*/

char **strtow(char *str)
{
	unsigned int words = 0, isWord = 0;
	char **ptrToArray, *fstChar;

	if (!str || !*str || !word_count(str))
		return (NULL);
	ptrToArray = malloc(sizeof(char *) * (word_count(str) + 1));
	while (1)
	{
		if (*str == ' ' || !*str)
		{
			if (isWord)
			{
				ptrToArray[words] = malloc(sizeof(char) * (isWord + 1));
				if (!ptrToArray[words])
				{
					return (NULL);
				}
				cpchars_inBuffer(ptrToArray[words], fstChar, str - 1);
				words++;
				isWord = 0;
			}
			if (!*str)
				break;
		}
		else
		{
			if (!isWord++)
				fstChar = str;
		}
		str++;
	}
	ptrToArray[words] = 0;

	return (ptrToArray);
}
