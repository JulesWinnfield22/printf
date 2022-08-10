#include "main.h"
#include <stdarg.h>
/**
 * print - print string
 * @c: the string
 *
 * Return: no return value
 */
void print(char *c)
{
	if (*c != '\0')
	{
		_putchar(*c);
		print(c + 1);
	}
}

/**
 * getLength - length of a string
 * @c: the string
 *
 * Return: the length
 */
int getLength(char *c)
{
	int a;

	a = 0;
	while (c[a])
		a++;

	return (a);
}

/**
 * _printf - produces output according to a format
 * @format: the string format
 *
 * Return: string lenght
 */
int _printf(const char *format, ...)
{
	char *c;
	int count;
	va_list fmt;

	va_start(fmt, format);
	count = 0;

	while (*format)
	{
		if (*format == '%' && *(format + 1) == 'c')
		{
			_putchar(va_arg(fmt, int));
			format += 2;
			count++;
		} else if (*format == '%' && *(format + 1) == 's')
		{
			c = va_arg(fmt, char *);
			print(c);
			count += getLength(c);
		} else
		{
			_putchar(*format);
			format++;
			count++;
		}
	}
	va_end(fmt);
	_putchar('\n');
	return (count);
}
