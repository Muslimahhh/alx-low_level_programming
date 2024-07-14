#include "main.h"

/**
 * _isupper - A function that checks for uppercase character.
 * @c: An int to be checked for uppercase
 *
 * Description: The program checkes if a letter given is upper case
 * Return: 1 if it is uppercase and 0 if it is not
*/
int _isupper(int c)
{
	/*making use of ASCII to represent uppercase letters*/
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
