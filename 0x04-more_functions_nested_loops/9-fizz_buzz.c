#include <stdio.h>

/**
* main - C program solving the fizz-buzz programming test
*
* Return: Always 0 (success)
*/
int main(void)
{
	int n;

	for (n = 1; n < 101; n++)
	{
		if (!(n % 5) && !(n % 3))
			printf("FizzBuzz");
		else if (!(n % 5))
			printf("Buzz");
		else if (!(n % 3))
			printf("Fizz");
		else
			printf("%d", n);
		if (n != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}

