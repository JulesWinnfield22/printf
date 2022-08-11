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
 * add_node - adds a new node at the beginning of a list_t
 * @head: the list
 * @str: the string
 *
 * Return: the list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (!str)
		return (0);

	new = malloc(sizeof(list_t));
	if (!new)
		return (0);
	new->str = strdup(str);
	new->len = get_length(strdup(str));
	new->next = *head;
	*head = new;
	return (*head);
}
