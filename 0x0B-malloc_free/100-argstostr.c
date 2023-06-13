#include <stdlib.h>

/**
* argstostr - Program is a function concatenates all argument
* @av: Argument pointer pointer
* @ac: Argument variable holds integer
*
* Return: return pointer pointer
*/

char *argstostr(int ac, char **av)
{
	int row, col, idx = 0, length = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (row = 0; row < ac; row++)
	{
		for (col = 0; av[row][col] != '\0'; col++)
			length++;
		length++;
	}

	str = malloc((length + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (row = 0; row < ac; row++)
	{
		for (col = 0; av[row][col] != '\0'; col++)
		{
			str[idx] = av[row][col];
			idx++;
		}
		str[idx] = '\n';
		idx++;
	}
	str[idx] = '\0';

	return (str);
}
