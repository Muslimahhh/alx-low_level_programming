#include "search_algos.h"

/**
* print_array - Prints a given array following some specifications
* @array: "int *" Array from which some elements will be printed
* @low: "size_t" The lower boundary to print elements from array
* @high: "size_t" The higher boundary to stop printing elements
*
* Return: "void" Nothing
*/
void print_array(int *array, size_t low, size_t high)
{
	size_t i;

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		if (i == high)
		{
			printf("%d\n", array[i]);
			continue;
		}
		printf("%d, ", array[i]);
	}
}

/**
* binary_search - Implement a binary search algorithm to get an element
* @array: "int *" Array of integers being searched
* @size: "size_t" The number of elements in the array
* @value: "int" The number being searched for in the array
*
* Return: "int" index where value is located, -1 otherwise
*/
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t mid;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		mid = (int)low + (high - low) / 2;
		print_array(array, low, high);
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}

	return (-1);
}
