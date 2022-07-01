#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 48; a <= 102;)
	{
		putchar((char) a);
		if (a == 57)
			a += 97 - 57;
		else
			a++;
	}
	putchar('\n');
	return (0);
}
