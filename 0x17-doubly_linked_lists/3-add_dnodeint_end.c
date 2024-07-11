#include "lists.h"

/**
  * add_dnodeint_end - adds node at end of a linked list
  * @head: poinjter to pointer pf head of a list
  * @n: integer value
  * Return: pointer to new node added
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *thead = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while (thead->next != NULL)
		thead = thead->next;
	thead->next = new;
	new->prev = thead;

	return (new);
}
