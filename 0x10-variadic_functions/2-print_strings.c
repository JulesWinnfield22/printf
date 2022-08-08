#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints numbers, followed by a new line.
 * @separator: word separator
 * @n: number of words
 *
 * Return: no return value
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ab;
	int a;
	char *word;

	va_start(ab, n);
	for (a = 0; a < (int)n; a++)
	{
		word = va_arg(ab, char *);
		if (!word)
			printf("(nil)");
		else
		{
			printf("%s", word);
			if (separator && a < (int)(n - 1))
				printf("%s", separator);
		}
	}
	va_end(ab);
	printf("\n");
}
