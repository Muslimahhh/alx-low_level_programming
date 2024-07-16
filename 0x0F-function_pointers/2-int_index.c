#include "function_pointers.h"

/**
* int_index - Searches for an integer from an array using a function
* @array: The array the search will take place
* @size: The length of the array
* @cmp: The function that performs the search
*
* Return: The integer index of the searched element in the array
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp || size < 1)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}

