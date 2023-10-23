#include <stdio.h>

/**
* print_diagsums - Prints the sum of two diagonals of a square matrix
* @a: The matrix (or, 2D array)
* @size: The size of each array in the parent array
*
* Return: Nothing (void)
*/
void print_diagsums(int *a, int size)
{
	int first_sum = 0, second_sum = 0, iterator;
	int *ptr = &a[0];

	for (iterator = 0; iterator < size; iterator++)
	{
		int pos = size - 1 - iterator, op;

		for (op = 0; op < size; op++)
		{
			if (op == iterator)
				first_sum += *ptr;
			if (op == pos)
				second_sum += *ptr;
			ptr++;
		}
	}
	printf("%d, %d\n", first_sum, second_sum);
}

