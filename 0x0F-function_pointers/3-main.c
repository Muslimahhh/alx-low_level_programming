#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "3-calc.h"

/**
* main - The entry point for the C program
* @argc: Argument count
* @argv: Array of arguments
*
* Return: Always 0 (success)
*/
int main(int argc, char *argv[])
{
	int num1, num2;
	char *operand;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operand = argv[2];

	if (operand && *operand != '+' && *operand != '-' && *operand != '*' &&
		*operand != '/' && *operand != '%')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*operand == '/' || *operand == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(operand)(num1, num2));

	return (0);
}
