#include "main.h"

/**
* _isdigit - Checks if a given ascii num is an integer
* @c: The ASCII number to be checked
*
* Return: 1 (if it is a digit), 0 otherwise
*/
int _isdigit(int c)
{
	if ((c > 47) && (c < 58))
		return (1);
	return (0);
}

