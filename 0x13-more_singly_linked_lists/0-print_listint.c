#include "lists.h"

/**
  * print_listint - prints all the elements of a list
  * @h: pointer to the head node
  * Return: number of nodes
  */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp = h;
	unsigned int num = 0;

	if (temp == NULL)
		return (0);
	while (temp)
	{
		printf("%d\n", temp->n);
		num++;
		temp = temp->next;
	}
	return (num);
}
