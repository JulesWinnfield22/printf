#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - Entry point
 * @ac: arg count
 * @av: args
 *
 * Return: Always 0
 */

int main(int ac, char *av[])
{
	int a, b, res;
	int (*f)(int, int);
	char *op;

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op = av[2];
	a = atoi(av[1]);
	b = atoi(av[3]);

	if ((*op == *DIV_OP || *op == *MOD_OP) && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	f = get_op_func(op);

	if (!f)
	{
		printf("Error\n");
		exit(99);
	}

	res = f(a, b);

	printf("%d\n", res);
	return (0);
}

