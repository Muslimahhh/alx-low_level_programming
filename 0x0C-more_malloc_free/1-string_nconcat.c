#include <stdlib.h>

/**
* string_nconcat - Concatenates two strings, with a limit
* @s1: Main string
* @s2: Second string to be added to main string
* @n: The amount of bytes from "s2" that can be joined with "s1"
*
* Return: A pointer to the address of the concatenated string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1, l2, i, j;
	char *str;

	/*treat NULL as empty string*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	l1 = l2 = 0;
	/*length of both s1 & s2 respectively*/
	while (s1[l1] != '\0')
		l1++;
	while (s2[l2] != '\0')
		l2++;

	/*set n to length of s2*/
	if (n >= l2)
		n = l2;

	str = (char *) malloc((l1 + n + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	/*add s1 to str*/
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	/*add s2 n bytes to str*/
	for (j = 0; j < n && s2[j] != '\0'; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[i] = '\0';
	return (str);
}

