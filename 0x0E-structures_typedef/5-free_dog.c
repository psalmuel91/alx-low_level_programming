#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
* free_dog - Function frees dog's data memory
* @d: Pointer variable defines struct dog
*/

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
