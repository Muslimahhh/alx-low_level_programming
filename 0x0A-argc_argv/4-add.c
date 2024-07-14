#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main-entry point
 * @argc: Argument count
 * @argv: Argument vector(Array of arguments)
 *
 * Description: The program program that adds positive numbers.
 * Return: Always 0 (sucess)
*/
int main(int argc, char *argv[])
{
	int j;

	int sum = 0;
	int i = 1;

	while (i < argc)
	{
		j = 0;

		while (argv[i][j])
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}

		sum += atoi(argv[i]);

		i++;

	}

	printf("%d\n", sum);
	return (0);
}
