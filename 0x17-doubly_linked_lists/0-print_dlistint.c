#include "lists.h"

/**
  * print_dlistint - print all element of a doubly linked lisy
  * @h: pointer to the list head
  * Return: number of node
  */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	size_t nodes = 0;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		nodes++;
	}
	return (nodes);
}
