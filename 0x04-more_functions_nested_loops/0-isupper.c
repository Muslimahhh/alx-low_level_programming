#include "main.h"

/**
* _isupper - Checks if a given character is in uppercase or lowercase
* @c: The parameter that holds the character to be checked
*
* Return: 1 (if @c is uppercase) or 0 (if @c is lowercase)
*/
int _isupper(int c)
{
	if ((c > 64) && (c < 91))
		return (1);
	return (0);
}

