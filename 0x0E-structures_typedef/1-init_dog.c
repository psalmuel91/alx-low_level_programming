#include <stdio.h>
#include "dog.h"

/**
* init_dog - Function that initializes a variable of type struct dog
* @d: Pointer variable defines struct dog
* @name: Pointer variable names the dog
* @age: Variable age, holds the age of the dog
* @owner: Pointer variable names the owner of the dog
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d -> name = name;
		d -> age = age;
		d -> owner = owner;
	}
}
