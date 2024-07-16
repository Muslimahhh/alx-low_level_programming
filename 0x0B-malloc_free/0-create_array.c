#include <stdlib.h>

/**
* create_array - Create an array of char with a dynamic size
* @size: The size of the array
* @c: What each char of the arry should be initialized with
*
* Return: A pointer to the array
*/
char *create_array(unsigned int size, char c)
{
	char *final_arr;
	unsigned int count;

	if (size < 1)
		return (NULL);
	final_arr = (char *)malloc(sizeof(char) * size);
	if (final_arr == NULL)
		return (NULL);
	for (count = 0; count < size; count++)
		final_arr[count] = c;

	return (final_arr);
}

