#include <stdio.h>
#include <stdlib.h>

/**
 * main-entry point
 * @argc: Argument count
 * @argv: Argument vector(Array of arguments)
 *
 * Description: prints the min number of coins to make change for an amount.
 * Return: 0 (sucess)1 if arguments are not given or are more than 1
*/
int main(int argc, char *argv[])
{
	int amount;
	int change = 0;
	int coins[] = {25, 10, 5, 2, 1};
	int i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amount = atoi(argv[1]);

	while (i < 5 && amount > 0)
	{
		change += (amount / coins[i]);
		amount = amount % coins[i];

		i++;
	}

	printf("%d\n", change);

	return (0);
}
