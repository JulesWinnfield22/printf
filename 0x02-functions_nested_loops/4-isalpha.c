#include <unistd.h>

#include "main.h"

/**
 * _isalpha - checks for alphabet
 * @c: the character to be checked
 *
 * Return: 0 or 1
 */
int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
		return (1);

	return (0);
}
