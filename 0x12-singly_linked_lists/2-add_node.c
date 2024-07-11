#include "lists.h"

/**
  * add_node - adds a new node at the beginning
  * @head: pointer to pointer of the head the struct
  * @str: str to be dublicated
  * Return: number of elements
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t len = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	if (strdup(str) == NULL)
	{
		free(new);
		return (NULL);
	}
	while (str[len++])
	{}
	new->str = strdup(str);
	new->len = len - 1;
	new->next = *head;
	*head = new;

	return (new);
}
