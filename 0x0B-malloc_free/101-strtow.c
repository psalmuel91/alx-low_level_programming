#include "main.h"
#include <stdlib.h>

/**
 * copychars - Program function copies char to buffer
 * @b: arg buffer
 * @start: arg starting char ptr
 * @stop: arg ending char ptr
 */

void copychars(char *b, char *start, char *stop)
{
	while (start <= stop && stop != NULL)
		*b++ = *start++;
	*b = 0;
}

/**
 * wordcount - Program function counts the number of words
 * @str: arg stores the strings
 *
 * Return: count of number of words
 */

int wordcount(char *str)
{
	int word = 0, num_word = 0;

	while (1)
	{
		if (*str == ' ' || !*str)
		{
			if (num_word)
				word++;
			num_word = 0;
			if (!*str)
				break;
		}
		else
			num_word++;
		str++;
	}

	return (word);
}

/**
 * strtow - Program function splits sentence into words
 * @str: arg stores the strings
 *
 * Return: ptr to string array
 */
char **strtow(char *str)
{
	int word = 0, num_word = 0;
	char **ret, *word_start;

	if (!str || !*str || !wordcount(str))
		return (NULL);

	ret = malloc(sizeof(char *) * (wordcount(str) + 1));

	while (1)
	{
		if (*str == ' ' || !*str)
		{
			if (num_word)
			{
				ret[word] = malloc(sizeof(char) * (num_word + 1));
				if (!ret[word])
				{
					return (NULL);
				}

				copychars(ret[word], word_start, str - 1);
				word++;
				num_word = 0;
			}

			if (!*str)
				break;
		}
		else
		{
			if (!num_word++)
				word_start = str;
		}
		str++;
	}

	ret[word] = 0;

	return (ret);
}
