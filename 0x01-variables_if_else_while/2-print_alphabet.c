#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (char a = 'A'; a <= 'Z'; a++)
	{
		putchar(a + 32);
	}
	putchar('\n');
	return (0);
}
