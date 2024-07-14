#include "main.h"

/**
 * _isalpha - Checks if a character is an alphabet
 * @c: is the int to be verified
 *
 * Description: The program takes an integer and verifies if it is a letter
 * Return: 1 if lowercase or uppercase, 0 if otherwise
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
