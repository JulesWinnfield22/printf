#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: the list
 * @n: the int
 *
 * Return: the list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (0);

	new->n = n;
	new->next = NULL;

	if (!*head)
	{
		*head = new;
		return (*head);
	}

	temp = *head;
	while (temp->next != 0)
		temp = temp->next;
	temp->next = new;

	return (*head);
}
