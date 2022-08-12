#include "main.h"
/**
 * printBinary - changes an int to decimal
 * @num: the int
 * @length: the length
 *
 * Return: thr length
 */
int printBinary(int num, int length)
{
	int x, a;

	if (num != 1)
	{
		x = (num % 2) == 0 ? num / 2 : (num - 1) / 2;
		length = printBinary(x, ++length);
	}

	if (num == 1)
	{
		_putchar(num + '0');
		++length;
	} else
	{
		a = num - (2 * x);
		_putchar(a + '0');
	}
	return (length);
}
/**
 * print_binary - changes an int to decimal
 * @arg: the int
 *
 * Return: thr length
 */
int print_binary(va_list arg)
{
	int length, num;

	num = va_arg(arg, int);
	length = printBinary(num, 0);
	return (length);
}
