#include "lists.h"

/**
  * reverse_listint - reverse a linked list
  * @head: pointer to the head node
  * Return: 1 if delete success
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp = *head;


	if (*head == NULL)
		return (NULL);
	if (temp->next == NULL)
		return (*head);

	temp = reverse_listint(temp);
}
