#include "main.h"

/**
* is_numerical - Program extracts integers from streams of characters
* @n: length of string
*
* Return: return the found integers
*/

int is_numerical(unsigned int n)
{
	return (n >= '0' && n <= '9');
}

/**
* _atoi - Extract integers from string
* @str: String
*
* Return: return 1 if number is true else return 0
*/


int _atoi(char *str)
{
	unsigned int num, i;
	int signs;

	signs = 1;
	num = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (is_numerical(str[i]))
		{
			num = (str[i] - 48) + num * 10;

			if (str[i + 1] == ' ')
				break;
		}
		else if (str[i] == '-')
		{
			signs *= -1;
		}
	}

	return (num * signs);
}
