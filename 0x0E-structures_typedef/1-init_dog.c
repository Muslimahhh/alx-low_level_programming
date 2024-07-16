#include "dog.h"

/**
* init_dog - Initializes a variable of type "struct dog"
* @d: Pointer to the struct dog
* @name: Name for the dog
* @age: Age of the dog
* @owner: Name of the owner
*
* Return: Nothing (void)
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

