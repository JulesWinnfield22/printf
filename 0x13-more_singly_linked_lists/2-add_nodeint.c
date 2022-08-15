#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *  add_nodeint - number of elements of a listint_t list
 * @head: the list
 * @n: the int
 *
 * Return: the list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (0);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
