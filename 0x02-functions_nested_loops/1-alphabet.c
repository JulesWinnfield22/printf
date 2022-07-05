#include <unistd.h>

#include "main.h"

/**
 * print_alphabet - prints all off the alphabets
 *
 * Return: no return value
 */
void print_alphabet(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}

	_putchar('\n');
}
/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
	print_alphabet();
	return (0);
}
