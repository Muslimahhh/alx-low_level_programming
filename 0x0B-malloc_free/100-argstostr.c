#include "main.h"
/**
  * get_len - gets the length of string array
  * @ac: string parameter
  * @av: array of args
  * Return: length in integer
  */
int get_len(int ac, char **av)
{
	int x, y;
	int len = ac;

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
			len++;
	}
	return (len);
}

/**
  * argstostr - creates an array of 2 dimensions
  * @ac: pointer to width
  * @av: pointerr to height
  * Return: pointer to the concatenated strings
  */
char *argstostr(int ac, char **av)
{
	int x, y, len, z = 0;
	char *con_str;

	if (ac == 0 || av == NULL)
		return (NULL);
	len = get_len(ac, av);

	con_str = malloc((ac + 1) * sizeof(char *));
	if (con_str == NULL)
		return (NULL);


	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
			con_str[z++] = av[x][y];
		con_str[z++] = '\n';
	}
	con_str[len] = '\0';
	return (con_str);
}
