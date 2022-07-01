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
			putchar((char) a);
			putchar(' ');
			putchar((char) a);

			if (b + 1 < 58)
			{
				putchar((char) b + 1);
			} else
			{
				putchar((char) b);
			}

			if (b < 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
