#include "main.h"

/**
* reverse_array - Program reverses streams of char in array
* @a: Argument pointer variable holds array
* @n: Argument holds integer variable
*
* Return: return on success
*/

void reverse_array(int *a, int n)
{
	int *begin_s, *end_s, s;
	int i;

	begin_s = a;
	end_s = a;

	for (i = 0; i < n - 1; i++)
	{
		end_s++;
	}

	for (i = 0; i < n / 2; i++)
	{
		s = *end_s;
		*end_s = *begin_s;
		*begin_s = s;
		begin_s++;
		end_s--;
	}
}
