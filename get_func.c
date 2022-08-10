#include "main.h"
/**
 * get_func - gets the function to execute the operation
 * @c: the flag
 *
 * Return: the function
 */

int (*get_func(char c))(va_list)
{
	int a;
	struct operation ops[] = {
		{'s', print_string},
		{'c', print_char},
		{'d', print_int},
		{'i', print_int}
	};

	a = 0;
	while (ops[a].flag != 0)
	{
		if (ops[a].flag == c)
			return (ops[a].func);
		a++;
	}

	return (0);
}

