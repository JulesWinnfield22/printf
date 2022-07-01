#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, c, d;

	for (a = 48; a <= 57; a++)
	{
		for (b = 48; b <= 57; b++)
		{
			for (c = 48; c <= 57; c++)
			{
				for (d = 48; d <= 57; d++)
				{
					if ((a == c && b == d) ||
					(b == 48 && d == 48 && c < a) ||
					(a == 48 && c == 48 && d < b) ||
					(c == a && d < b) || (d == b && c < a) |
					(c < a) || (d < b))
						continue;

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

	putchar('\n');
	return (0);
}
