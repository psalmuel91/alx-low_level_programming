#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
* print_dog - Function prints dog's data
* @d: Pointer variable defines struct dog
*/

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\nAge: %.6f\nOwner: %s\n",
		d->name != NULL ? d->name : "(nil)",
		d->age,
		d->owner != NULL ? d->owner : "(nil)");
	}
}
