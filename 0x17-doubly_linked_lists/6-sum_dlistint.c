#include "lists.h"

/**
  * sum_dlistint - returns the sum of all data in  alist
  * @head: pointer to the head of a list
  * Return: sum of all data in the list
  */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *thead = head;
	int sum = 0;

	if (head == NULL)
		return (sum);
	while (thead)
	{
		sum += thead->n;
		thead = thead->next;
	}
	return (sum);
}
