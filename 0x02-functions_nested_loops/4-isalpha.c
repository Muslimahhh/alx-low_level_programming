#include "main.h"

/**
* _isalpha - Checks if a parameter is an alphabet
* @c: The integer to be checked
*
* Return: 1 (if paramter is alphabet) or 0 (otherwise)
*/
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 124))
		return (1);
	return (0);
}

