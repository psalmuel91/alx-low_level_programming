#include <stdio.h>
#include "main.h"

/**
* main - Program that prints all arguments it receives
* @argc: Argument holds the count of command line arguments
* @argv: Argument pointer to array containing the program cmd line arguments
*
* Return: return (0) on Success.
*/

int main(int argc, char *argv[])
{
	int num;

	for (num = 0; num < argc; num++)
	{
		printf("%s\n", argv[num]);
	}
	return (0);
}
