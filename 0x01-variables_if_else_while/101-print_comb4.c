#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, c;

	for (a = 48; a <= 57; a++)
	{
		for (b = 48; b <=  57; b++)
		{
			for (c = 48; c <= 57; c++)
			{
				if (a < b && b < c)
				{
					if (c > 50 && b != 57)
					{
						putchar(',');
						putchar(' ');
					}
					putchar((char) a);
					putchar((char) b);
					putchar((char) c);
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
