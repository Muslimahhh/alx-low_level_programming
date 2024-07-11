#include "lists.h"

/**
  * add_node_end - adds a new node at the of the list
  * @head: pointer to pointer of the head the struct
  * @str: str to be dublicated
  * Return: number of elements
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *last;
	size_t len = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}
	while (str[len++])
	{}
	new->str = strdup(str);
	new->len = len - 1;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new;
	}
	return (*head);
}
