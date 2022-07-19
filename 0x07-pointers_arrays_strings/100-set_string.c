#include "main.h"
#include <stdio.h>
/**
 * set_string - sets the value of a pointer to a char
 * @s: the string
 * @to: the string to be chnaged
 *
 * Return: the changed string
 */
void set_string(char **s, char *to)
{
	*s = to;
}
