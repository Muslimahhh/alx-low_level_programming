#include "main.h"

/**
* reverse_array - reverses the content of an array of integers
* @a: The array of integers
* @n: The length of the array
*
* Return: Nothing (void)
*/
void reverse_array(int *a, int n)
{
	int half_num;

	for (half_num = 0; half_num < n / 2; half_num++)
	{
		int temp = a[half_num];

		a[half_num] = a[n - half_num - 1];
		a[n - half_num - 1] = temp;
	}
}

