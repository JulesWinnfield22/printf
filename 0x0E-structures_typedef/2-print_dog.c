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

	if (d->name)
		printf("Name: %s\n", d->name);
	else
		printf("Name: %s\n", "(nil)");

	printf("Age: %f\n", d->age);

	if (d->owner)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: %s\n", "(nil)");
}
