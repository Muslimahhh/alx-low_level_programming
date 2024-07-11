#include "lists.h"

/**
  * dlistint_len - get number of element
  * @h: pointer to the list head
  * Return: number of element
  */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	size_t nodes = 0;

	while (tmp != NULL)
	{
		tmp = tmp->next;
		nodes++;
	}
	return (nodes);
}
