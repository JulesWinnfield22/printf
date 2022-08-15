#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - nserts a new node at a given position.
 * @head: the list
 * @idx: the index
 * @n: the int
 *
 * Return: the list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *h, *temp, *new;
	unsigned int index;

	if (!*head)
		return (0);

	index = 0;
	h = *head;
	while (head)
	{
		if (idx == 0)
		{
			new = malloc(sizeof(listint_t));
			if (!new)
				return (0);
			new->n = n;
			new->next = *head;
			*head = new;
			return (new);
		}
		if ((index + 1) == idx)
		{
			new = malloc(sizeof(listint_t));
			if (!new)
				return (0);

			temp = (*head)->next;

			new->n = n;
			new->next = temp;

			(*head)->next = new;
			*head = h;
			return (new);
		}
		*head = (*head)->next;
		index++;
	}
	return (0);
}
