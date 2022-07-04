#include <stdio.h>
#include <string.h>
/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, c, d;
	char first[2], second[2];

	for (a = 48; a <= 57; a++)
	{
		for (b = 48; b <= 57; b++)
		{
			for (c = 48; c <= 57; c++)
			{
				for (d = 48; d <= 57; d++)
				{
					if (c > a || (d > b && c == a))
					{
						putchar((char) a);
						putchar((char) b);
						putchar(' ');
						putchar((char) c);
						putchar((char) d);

					if (a != 57 || b != 56 || c != 57 || d != 57)
					{
						putchar(',');
						putchar(' ');
					}
					}
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
