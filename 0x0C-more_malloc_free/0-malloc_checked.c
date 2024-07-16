#include <stdlib.h>

/**
* malloc_checked - Assigns memory using malloc
* @b: The amount of memory to be allocated
*
* Return: A void pointer holding the address of the memory space allocated
*/
void *malloc_checked(unsigned int b)
{
	int *mspace;

	mspace = malloc(b);
	if (mspace == NULL)
		exit(98);
	return (mspace);
}

