#include  "main.h"
#include <stdio.h>

/**
 * main-entry point
 * @argc: Argument count
 * @argv: Argument vector(Array of arguments)
 *
 * Description: The program prints the number of arguments passed into it.
 * Return: Always 0 (sucess)
*/
int main(int argc, char *argv[])
{
	int sum = 0;

	while (argc-- > 1)
	{
		sum += 1;
	}
	printf("%d\n", sum);
	*argv[0] = *argv[0];

	return (0);
}
