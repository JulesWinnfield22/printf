#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints a struct dog
 * @d: the dog
 *
 * Return: no return value
 */
void print_dog(struct dog *d)
{
	if (d == 0)
		return;

	printf("Name: %s\nAge: %f%s\nOwner: %s\n", d->name ? d->name : "nil",
		d->age, d->age ? "" : "nil", d->owner ? d->owner : "nil");
}
