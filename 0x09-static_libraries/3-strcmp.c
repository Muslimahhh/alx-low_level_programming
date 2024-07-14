#include  "main.h"

/**
 * _strcmp - function that compares two strings.
 * @s1: first char parameter to be compared
 * @s2: second char parameter to be compared
 *
 * Return: Always 0 if S1 == s2, -ve S2>s1, +ve S2<s1
*/
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0')
	{
		if (*s1 != *s2)
		{
			break;
		}
		else
		{
			s1++;
			s2++;
		}
	}
	return (*s1 - *s2);
}
