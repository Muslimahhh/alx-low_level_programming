#include "main.h"

/**
* leet - Encodes a string in the 1337 cypher format
* @str: The string to be modified (encoded)
*
* Return: A pointer to the modified string
*/
char *leet(char *str)
{
	char *original_str = str;
	int lilac;
	int bad_lower[] = {97, 101, 111, 108, 116};
	int bad_upper[] = {65, 69, 79, 76, 84};
	int good[] = {52, 51, 48, 49, 55};

	while (*str)
	{
		for (lilac = 0; lilac < 5; lilac++)
		{
			if ((*str == bad_lower[lilac]) || (*str == bad_upper[lilac]))
			{
				*str = good[lilac];
				break;
			}
		}
		str++;
	}

	return (original_str);
}

