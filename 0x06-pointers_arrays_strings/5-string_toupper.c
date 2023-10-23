#include "main.h"

/**
* string_toupper - Changes all lowercase letter of a string to uppercase
* @str: The string to be modified
*
* Return: A pointer to the modified string
*/
char *string_toupper(char *str)
{
	char *str_cpy = str;

	while (*str_cpy)
	{
		if ((*str_cpy > 96) && (*str_cpy < 123))
			*str_cpy -= 32;
		str_cpy++;
	}
	return (str);
}

