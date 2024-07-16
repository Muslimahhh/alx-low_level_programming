#include "search_algos.h"

/**
* linear_search - Use a linear search algorithm to get index of an element
* @array: "int *" Array of integers to be searched
* @size: "size_t" Size of the array being searched
* @value: "int" The element to be searched for in the array
*
* Return: "int" the first index where value is located, -1 otherwise
*/
int linear_search(int *array, size_t size, int value)
{
	size_t bi;

	for (bi = 0; bi < size; bi++)
	{
		printf("Value checked array[%lu] = [%d]\n", bi, array[bi]);
		if (array[bi] == value)
			break;
	}

	if (bi >= size)
		return (-1);
	return (bi);
}
