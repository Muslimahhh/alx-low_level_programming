#include "lists.h"

/**
  * print_listint_safe - prints number of node
  * @head: pointer to the head node
  * Return:  number pf nodes
  */
size_t print_listint_safe(const listint_t *head)
{



	if (head == NULL)
		return (0);
	while (head)
	{
		printf("[%d] %d", head->n, head->n);
		
		head = head->next;
	}
	return (0);
}
