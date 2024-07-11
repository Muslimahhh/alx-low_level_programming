#include "lists.h"

/**
  * insert_nodeint_at_index - delete the head node of a linked list
  * @head: pointer to the head node
  * @idx: index of node to be returned
  * @n: data of the node
  * Return: void
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp, *t_head = *head;
	unsigned int i = 0;

	new = (listint_t *)malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = t_head;
		*head = new;
		return (new);
	}

	while (i++ < idx - 1)
	{
		if (t_head == NULL)
			return (NULL);
		t_head = t_head->next;
	}
	temp = t_head->next;
	new->next = temp;
	t_head->next = new;
	return (new);

}
