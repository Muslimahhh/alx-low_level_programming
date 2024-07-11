#include "lists.h"

/**
  * listint_len - return number of element
  * @h: pointer to the head node
  * Return: number of nodes
  */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp = h;
	unsigned int num = 0;

	if (temp == NULL)
		return (0);
	while (temp)
	{
		num++;
		temp = temp->next;
	}
	return (num);
}
