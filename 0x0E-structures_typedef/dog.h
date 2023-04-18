#ifndef DOG_HEADER_FILE
#define DOG_HEADER_FILE

/**
* struct dog - A new datatype describing a dog
* @name: Pointer variable names the dog
* @age: Variable age, holds the age of the dog
* @owner: Pointer variable names the owner of the dog
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};


void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
