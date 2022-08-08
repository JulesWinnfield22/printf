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
		printf("%d", va_arg(ab, int));
		if (separator && a < (int)(n - 1))
			printf("%s", separator);
	}
	va_end(ab);
	printf("\n");
}
