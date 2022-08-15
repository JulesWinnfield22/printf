#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - delete a node at a given position.
 * @head: the list
 * @idx: the index
 *
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int idx)
{
	listint_t *h, *temp;
	unsigned int index;

	if (!*head)
		return (0);

	index = 0;
	h = *head;
	while (head)
	{
		if (idx == 0)
		{
			temp = *head;
			*head = (*head)->next;
			free(temp);
			return (1);
		}
		if ((index + 1) == idx)
		{
			temp = (*head)->next;
			(*head)->next = ((*head)->next)->next;
			free(temp);
			*head = h;
			return (1);
		}
		*head = (*head)->next;
		index++;
	}
	return (-1);
}
