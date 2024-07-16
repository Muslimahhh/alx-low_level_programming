#include <stdlib.h>

/**
* _strdup - Duplicates a string using dynamic memory allocation
* @str: The string to be duplicated
*
* Return: A pointer to the the duplicated string
*/
char *_strdup(char *str)
{
	int str_count, iterator;
	char *dup_string;

	if (str == NULL)
		return (NULL);

	for (str_count = 0; str[str_count] != '\0'; str_count++)
		;

	dup_string = (char *)malloc(sizeof(char) * (str_count + 1));
	if (dup_string == NULL)
		return (NULL);

	for (iterator = 0; iterator < str_count; iterator++)
		dup_string[iterator] = str[iterator];

	dup_string[iterator] = '\0';
	return (dup_string);
}

