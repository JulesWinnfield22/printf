#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *  pop_listint - deletes the head of the list
 * @head: the list
 *
 * Return: the list
 */
int pop_listint(listint_t **head)
{
	int poped;
	listint_t *newHead, *temp;

	if (!head || !*head)
		return (0);

	temp = *head;
	newHead = (*head)->next;
	poped = (*head)->n;

	*head = newHead;
	free(temp);

	return (poped);
}
