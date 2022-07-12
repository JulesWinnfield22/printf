#include "main.h"

/**
 * _atoi - prints a # from a string
 * @c: the string
 *
 * Return: n int value
 */
int _atoi(char *c)
{
	int a, b, val;
	char d;

	d = c[0];
	a = 0, val = 0, b = 1;

	while (d != '\0')
	{
		if (c[a] >= 48 && c[a] <= 57)
		{
			if (a > 0 && val == 0 && c[a - 1] == '-')
				b = -1;
			val = val * 10 + ((int) c[a]) - 48;
		} else if (val != 0)
			break;
		a++;
		d = c[a];
	}
	return (val * b);
}
