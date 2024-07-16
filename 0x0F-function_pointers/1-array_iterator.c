#include "function_pointers.h"

/**
* array_iterator - Goes through an array and acts on individual elements
* @array: The array to go through
* @size: The length of the array
* @action: The action to be worked on the array elements
*
* Return: Nothing (void)
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && size > 0 && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}

