#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: word separator
 * @n: number of words
 *
 * Return: no return value
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ab;
	int a;

	va_start(ab, n);
	for (a = 0; a < (int)n; a++)
	{
		printf("%d%s", va_arg(ab, int), a < (int) n - 1 ? separator : "");
	}
	va_end(ab);
	printf("\n");
}
