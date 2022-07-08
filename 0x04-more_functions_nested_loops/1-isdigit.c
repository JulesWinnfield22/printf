#include "main.h"

/**
 * _isdigit - checks to see if a character is a digit
 * @c: the character to check if its a digit
 *
 * Return: 1 or 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);

	return (0);
}
