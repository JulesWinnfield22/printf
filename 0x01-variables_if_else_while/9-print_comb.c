#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b;

	for (a = 48; a <= 57; a++)
	{
		for (b = 48; b <= 57; b++)
		{
			putchar((char) a);
			putchar((char) b);
			putchar(',');
			putchar(' ');
		}

	}

	return (0);
}
