#include "dog.h"

/**
 * init_dog -  initialize a variable of type struct dog
 * @d: the dog
 * @name: the dogs name
 * @age: the dogs age
 * @owner: the dogs  owner
 *
 * Return: no return value
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
