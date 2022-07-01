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
		for (b = 48; b <=  57; b++)
		{
			if (a < b)
			{
				if (b > 49 && a != 57)
				{
					putchar(',');
					putchar(' ');
				}
				putchar((char) a);
				putchar((char) b);
			}
		}
	}

	putchar('\n');

	return (0);
}
