#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_op_func - selects the correct function
 * @s: the operator
 *
 * Return: the function
 */

int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
		{ADD_OP, op_add},
		{SUB_OP, op_sub},
		{DIV_OP, op_div},
		{MUL_OP, op_mul},
		{MOD_OP, op_mod},
		{NULL, NULL}
	};

	i = 0;
	while (ops[i].op != NULL)
	{
		if (*ops[i].op == *s)
			return (ops[i].f);
		i++;
	}
	return (0);
}

