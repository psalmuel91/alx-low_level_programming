#include <stdio.h>

/**
* main - Function prints the name of the file it was compiled from
*
* Return: return (0) success.
*/

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
