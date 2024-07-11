#include "lists.h"

/**
  * free_dlistint - free memory of linked list
  * @head: pointer to the head of list
  * Return: void
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp, *thead = head;

	while (thead != NULL)
	{
		temp = thead->next;
		free(thead);
		thead = temp;
	}
}
