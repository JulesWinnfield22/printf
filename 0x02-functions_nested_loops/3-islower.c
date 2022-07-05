#include <unistd.h>

#include "main.h"

/**
 * _islower - checks for lowercase alphabet
 * @c: the character to be checked
 *
 * Return: 0 or 1
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);

	return (0);
}
