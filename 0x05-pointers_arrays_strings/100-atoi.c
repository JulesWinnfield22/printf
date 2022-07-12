#include "main.h"

/**
 * is_neg - checks if a # is negative or positive
 * @s: the string
 * @n: the index
 *
 * Return: -1 or 1
 */
int is_neg(char *s, int n)
{
	int a, pos, neg;

	a = 0, pos = 0, neg = 0;

	while (a < n)
	{
		if (s[a] == '-')
			neg++;
		else if (s[a] == '+')
			pos++;
		a++;
	}

	return (neg > pos ? -1 : 1);
}
/**
 * _atoi - prints a # from a string
 * @c: the string
 *
 * Return: n int value
 */
int _atoi(char *c)
{
	int a, b;
	double val;
	char d;

	d = c[0];
	a = 0, val = 0, b = 1;

	while (d != '\0')
	{
		if (c[a] >= 48 && c[a] <= 57)
		{
			if (a > 0 && val == 0 && c[a - 1] == '-')
				b = is_neg(c, a);
			val = val * 10 + ((int) c[a]) - 48;
		} else if (val != 0)
			break;
		a++;
		d = c[a];
	}
	return ((int) val * b);
}
