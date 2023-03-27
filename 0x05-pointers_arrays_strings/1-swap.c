#include "main.h"
/**
* swap_int - Program swaps the values stored in two variables
* @a: argument pointer to variable a
* @b: argument pointer to variable b
*
* Return: return nothing on success
*/

void swap_int(int *a, int *b)
{
	int temp;	/* Holds temporary value */

	temp = *a;
	*a = *b;
	*b = temp;
}
