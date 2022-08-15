#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint - the sum of all the data (n) of a listint_t linked list
 * @head: the list
 *
 * Return: the list
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
