#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * Return: always return 0 (success)
 */
int main(void)
{
	int x, sum;

	for (x = 0; x  < 1024; x++)
	{
		if ((x % 3) == 0 || (x % 5) == 0)
			sum += x;
	}
	printf("%d\n", sum);
	return (0);
}
