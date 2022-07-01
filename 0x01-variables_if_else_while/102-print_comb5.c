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
			
			int pos = 0;

			if (b + 1 < 58)
			{
				pos = 1;
			}
			
			putchar((char) b + pos);

			if (b != 57 || a != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
