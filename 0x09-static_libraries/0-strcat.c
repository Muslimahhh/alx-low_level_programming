#include  "main.h"
#include <stdio.h>

/**
 * _strcat - function that concatenates two strings.
 * @dest: First input parameter string
 * @src: Second input that is appended to dest
 *
 * Description: The program makes use of _putchar inorder to append 2 strings
 * Return: Appended string
*/
char *_strcat(char *dest, char *src)
{
	char *concatinate = dest;
	/* while loop that brings pointer to the end of dest*/
	while (*dest != '\0')
	{
		dest++;
	}

	/*while loop that adds the characters of src sucessively*/
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	/* adds a null character to the end ommited by  formal loop*/
	*dest = '\0';

	/**
	 * returns the original src pointer so it can point to the begining of
	 * the concatinated string and read automatically till
	 * it finds a new line
	 */
	return (concatinate);
}
