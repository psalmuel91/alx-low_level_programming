#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
* new_dog - Function prints new dog's data
* @name: Pointer variable names the dog
* @age: Variable age, holds the age of the dog
* @owner: Pointer variable names the owner of the dog
*
* Return: return pointer to new dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int lenOfName, lenOfOwner;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	lenOfName = _strlen(name);
	new_dog->name = malloc(sizeof(char) * lenOfName + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = _strcpy(new_dog->name, name);
	lenOfOwner = _strlen(owner);
	new_dog->owner = malloc(sizeof(char) * lenOfOwner + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = _strcpy(new_dog->owner, owner);
	new_dog->age = age;

	return (new_dog);
}

/**
 * _strlen - Computes length of strings
 * @str: pointer to string
 * Return: the length
 */
int _strlen(char *str)
{
	int idx;

	for (idx = 0; str[idx] != '\0'; idx++)
	;
	return (idx);
}

/**
 * _strcpy - copies a pointed string
 * @dest: Argument pointer to the destine string
 * @src: Argument pointer to the source string
 * Return: the adress of string
 */
char *_strcpy(char *dest, char *src)
{
	int idx = 0;

	while (src[idx] != '\0')
	{
		dest[idx] = src[idx];
		idx++;
	}

	dest[idx] = '\0';
	return (dest);
}

