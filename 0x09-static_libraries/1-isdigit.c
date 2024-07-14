#include "main.h"

/**
 * _isdigit - function that checks for a digit (0 through 9).
 * @c: The int to be checked
 *
 * Description: The program uses ASCII chart to check for a digit
 * Return: 1 if digit and 0 if not
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
