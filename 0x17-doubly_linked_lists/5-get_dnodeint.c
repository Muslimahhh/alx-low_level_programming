#include "lists.h"

/**
  * get_dnodeint_at_index - get a node at an index from the linked list
  * @head: pointer to the head node of the linked list
  * @index: index to look for node
  * Return: pointer to the node at index
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *thead;
	unsigned int j, i = 0;

	if (head == NULL)
		return (NULL);
	thead = head;
	while (thead != NULL)
	{
		thead = thead->next;
		i++;
	}
	if (index > i)
		return (NULL);

	j = 0;
	thead = head;
	while (thead != NULL && j < index)
	{
		thead = thead->next;
		j++;
	}

	return (thead);
}
