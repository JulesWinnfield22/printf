#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * get_length - string length
 * @str: the sring
 *
 * Return: the length
 */
int get_length(char *str)
{
	int a;

	a = 0;
	while (str[a])
		a++;

	return (a);
}
/**
 * add_node_end - adds a new node at the end of a list_t
 * @head: the list
 * @str: the string
 *
 * Return: the list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;

	if (!str)
		return (0);

	new = malloc(sizeof(list_t));
	if (new == 0)
		return (0);

	temp = malloc(sizeof(list_t));
	if (!temp)
		return (0);

	new->str = strdup(str);
	new->len = get_length(strdup(str));
	new->next = NULL;

	if (!*head)
	{
		*head = new;
		return (*head);
	}
	temp = (*head);
	while (1)
	{
		if ((*head)->next == NULL)
			break;
		*head = (*head)->next;
	}
	(*head)->next = new;
	*head = temp;
	return (*head);
}
