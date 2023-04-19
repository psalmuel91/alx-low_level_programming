#include "function_pointers.h"

/**
* print_name - Function prints characters to stdout
* @name: Argument pointer holds character
* @f: Pointer to function with char parameter and no return
*
* Return: Nothing
*/

void print_name(char *name, void (*f)(char *))
{
	if (f != 0)
		f(name);
}
