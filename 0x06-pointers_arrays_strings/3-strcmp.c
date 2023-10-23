#include "main.h"

/**
* _strcmp - Compares two strings
* @s1: The first string
* @s2: The second string
*
* Return: 0 if equal, <0 if s1 is higher than s2 & >0 otherwise
*/
int _strcmp(char *s1, char *s2)
{
	int char_check = 0;

	while (s1[char_check] != '\0' && s2[char_check] != '\0')
	{
		int diff = s1[char_check] - s2[char_check];

		if (diff != 0)
			return (diff);
		char_check++;
	}

	if (s1[char_check] != '\0')
		return (1);
	else if (s2[char_check] != '\0')
		return (-1);
	return (0);
}

