#include "lists.h"

/**
  * add_nodeint - add new node to the beginning of a linked list
  * @head: pointer to the head node
  * @n: value of the dat
  * Return: pointer to the added node
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = *head;
	listint_t *new;

	new = (listint_t *)malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	new->next = temp;
	*head = new;
	return (new);
}
