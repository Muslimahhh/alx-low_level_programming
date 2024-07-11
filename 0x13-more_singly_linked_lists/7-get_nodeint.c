#include "lists.h"

/**
  * get_nodeint_at_index - delete the head node of a linked list
  * @head: pointer to the head node
  * @index: index of node to be returned
  * Return: void
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		i++;
	}
	return (head);
}
