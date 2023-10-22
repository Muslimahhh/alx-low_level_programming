#include "main.h"

/**
* _islower - Checks if a character is lower or uppercase
* @c: The character that will be checked
*
* Return: 1 (if lowercase) or 0 (otherwise)
*/

int _islower(int c)
{
	if (c > 96)
		return (1);
	else
		return (0);
}

