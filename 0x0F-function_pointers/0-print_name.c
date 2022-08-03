#include "function_pointers.h"

/**
 * print_name - that prints a name
 * @name: the name to print
 * @f: a fn
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
