#include "main.h"
/**
* more_numbers - prints 10 times numbers, from 0 to 14
* @void: returns nothing
*
* Return: return (0) Success
*/

void more_numbers(void)
{
	int i;
	int f_num;
	int s_num;
	int result;

	i = 0;
	result = 0;
	while (i < 10)
	{
		while (result <= 14)
		{
			if (result < 10)
			{
				s_num = result;
			}
			else
			{
				f_num = result / 10;
				s_num = result % 10;
				_putchar (f_num + '0');
			}

			_putchar (s_num + '0');

			result++;
		}
		i++;
		result = 0;
		_putchar ('\n');
	}

}
