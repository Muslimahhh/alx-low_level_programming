#include "main.h"

/**
 * _islower - Checks if characters are lower case or not
 * @c: int to be checked
 *
 * Description: Verifies if it is between a and z
 * Return: 1 if c is lowercase and 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
