#include <stdlib.h>
#include "dog.h"

/**
* free_dog - Frees the memory allocated to a dog struct
* @d: The dog struct
*
* Return: Nothing (void)
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

