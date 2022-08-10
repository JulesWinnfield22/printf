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
	char *c, s;
	int count;
	va_list fmt;

	if (!format)
		return (0);

	va_start(fmt, format);
	count = 0;

	while (*format)
	{
		if (*format == '%' && *(format + 1) == 'c')
		{
			s = va_arg(fmt, int);
			if (s)
			{
				_putchar(s);
				format += 2;
				count++;
			}
		} else if (*format == '%' && *(format + 1) == 's')
		{
			c = va_arg(fmt, char *);
			if (c)
			{
				print(c);
				count += getLength(c);
			}
		} else if (*format != '%')
		{
			_putchar(*format);
			format++;
			count++;
		} else
			format++;
	}
	va_end(fmt);
	return (count);
}
