#include "main.h"

/**
* swap_int - Swaps the value of two integers
* @a: The first integer
* @b: The second integer
*
* Return: Nothing (Void)
*/
void swap_int(int *a, int *b)
{
	int new_b = *a;
	int new_a = *b;

	*b = new_b;
	*a = new_a;
}

