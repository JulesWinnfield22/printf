#include <unistd.h>

#include "main.h"

/**
 * _abs - returns the absolute value of a number
 * @c: the number which the absolute value will be returned
 *
 * Return: any number greater than -1
 */
int _abs(int c)
{
	if (c < 0)
		c *= -1;

	return (c);
}
