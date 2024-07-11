#include "lists.h"

/**
  * delete_nodeint_at_index - delete the node at index
  * @head: pointer to the head node
  * @index: index of node to be deleted
  * Return: 1 if delete success
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *t_head = *head;

	unsigned int i = 0;

	if (t_head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = t_head;
		*head = t_head->next;
		free(temp);
		return (1);
	}
	else
	{
		while (i++ < index - 1)
		{
			t_head = t_head->next;
		}
		temp = t_head->next;
		t_head->next = t_head->next->next;
		free(temp);
		return (1);
	}
	return (-1);
}
