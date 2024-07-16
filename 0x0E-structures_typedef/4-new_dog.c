#include <stdlib.h>
#include "dog.h"

/**
* new_dog - Creates a new dog struct instance
* @name: The dog's name
* @age: The age of the dog
* @owner: The owner's name
*
* Return: A pointer to a dog struct instance
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	int name_len, owner_len, i;
	dog_t *doggy;

	name_len = owner_len = 0;
	while (name[name_len++])
		;
	while (owner[owner_len++])
		;

	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);
	doggy->age = age;

	doggy->name = malloc(sizeof(doggy->name) * name_len);
	if (doggy == NULL)
		return (NULL);
	for (i = 0; i < name_len; i++)
		doggy->name[i] = name[i];
	doggy->name[i] = '\0';

	doggy->owner = malloc(sizeof(doggy->owner) * owner_len);
	if (doggy == NULL)
		return (NULL);
	for (i = 0; i < owner_len; i++)
		doggy->owner[i] = owner[i];
	doggy->owner[i] = '\0';

	return (doggy);
}

