#include "main.h"
#include <stdio.h>

/**
* print_to_98 - Prints all numbers from a specified integer to 98
* @n: The integer to count to 98 from
*
* Return: Void
*/

void print_to_98(int n)
{
	int count;

	if (n > 98)
		for (count = n; count > 98; --count)
			printf("%d, ", count);
	else
		for (count = n; count < 98; ++count)
			printf("%d, ", count);
	printf("98\n");
}

