#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all the elements of a list_t list
 * @h: the list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int a;

	if (!h)
		return (0);
	a = 0;
	while (1)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		a++;
		if (h->next == NULL)
			break;
		h = h->next;
	}

	return (a);
}
