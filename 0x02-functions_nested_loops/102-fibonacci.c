#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * Return: always return 0 (success)
 */
int main(void)
{
	int x;
	unsigned long a = 0, b = 1, sum;

	for (x = 0; x  < 50; x++)
	{
		sum = a + b;
		printf("%lu", sum);
		a = b;
		b = sum;

		if (x == 49)
			printf("\n");
		else
			printf(",");
	}
	return (0);
}
