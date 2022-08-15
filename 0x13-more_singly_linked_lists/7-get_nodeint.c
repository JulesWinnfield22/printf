#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index - the nth node of a listint_t linked list
 * @head: the list
 * @index: index
 *
 * Return: the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;

	n = 0;
	while (n <= index && head)
	{
		if (n == index)
			return (head);
		n++;
		head = head->next;
	}
	return (0);
}
