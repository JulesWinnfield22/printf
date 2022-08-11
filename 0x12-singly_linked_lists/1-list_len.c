#include "lists.h"
#include <stdio.h>
/**
 * list_len - returns the number of elements in a linked
 * @h: the list
 *
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	int a;

	if (!h)
		return (0);
	a = 0;
	while (1)
	{
		a++;
		if (h->next == NULL)
			break;
		h = h->next;
	}

	return (a);
}
