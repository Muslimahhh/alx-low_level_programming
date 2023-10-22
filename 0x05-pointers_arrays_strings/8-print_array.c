#include <stdio.h>

/**
* print_array - Prints a specified no. of elements of an array
* @a: The array from which we'll print elements
* @n: The number of elements to print
*
* Return: Nothing (void)
*/
void print_array(int *a, int n)
{
	int lilac;

	for (lilac = 0; lilac < n; lilac++)
	{
		if (lilac == (n - 1))
			printf("%d", a[lilac]);
		else
			printf("%d, ", a[lilac]);
	}
	printf("\n");
}

