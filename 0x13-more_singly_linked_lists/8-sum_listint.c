#include "lists.h"

/**
  * sum_listint - sum all data of the nodes in the list
  * @head: pointer to the head node
  * Return: sum of all  the dat
  */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
