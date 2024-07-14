#include  "main.h"
#include <stdio.h>

/**
 * main-entry point
 * @argc: Argument count
 * @argv: Argument vector(Array of arguments)
 *
 * Description: The program prints all arguments it receives
 * Return: Always 0 (sucess)
*/
int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
