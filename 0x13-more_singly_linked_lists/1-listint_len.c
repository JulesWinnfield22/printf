#include "lists.h"

/**
 * listint_len - number of elements of a listint_t list
 * @h: the list
 *
 * Return: the number of elemets
 */
size_t listint_len(const listint_t *h)
{
	int length;

	length = 0;
	while (h)
	{
		++length;
		h = h->next;
	}

	return (length);
}
