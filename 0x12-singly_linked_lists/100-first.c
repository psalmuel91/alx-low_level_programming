#include <stdio.h>

void __attribute__((constructor)) hare(void);

/**
* HARE - Function calls a print on string before the
*        main function is executed.
*/

void hare(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
