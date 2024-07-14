#include  "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main-entry point
 * @argc: Argument count
 * @argv: Argument vector(Array of arguments)
 *
 * Description: The program multiplies two numbers.
 * Return: 1 if arguments are not two 0 if they are (success)
*/
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
