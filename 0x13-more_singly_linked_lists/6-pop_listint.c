#include "lists.h"

/**
  * pop_listint - delete the head node of a linked list
  * @head: pointer to the head node
  * Return: void
  */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int val;

	if (*head == NULL)
		return (0);

	temp = *head;
	val = (*head)->n;
	*head = (*head)->next;
	free(temp);
	return (val);
}
