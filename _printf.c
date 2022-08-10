#include <stdarg.h>
#include <stdio.h>

#include "main.h"
/**
 * _printf - prints a strinf
 * @format: the string format
 *
 * Return: the string length
 */
int _printf(const char *format, ...)
{
	int count;
	va_list fmt;
	int (*func)(va_list);

	if (!format)
		return (-1);

	count = 0;
	va_start(fmt, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			func = get_func(*format);

			if (!func)
				return (-1);
			count += func(fmt);
			format++;
		} else
		{
			count += _putchar(*format++);
		}
	}
	va_end(fmt);
	return (count);
}
