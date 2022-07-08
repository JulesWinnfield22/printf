#include <stdio.h>
#include "main.h"

/**
* main - takes a date and prints how many days are left in the year, taking
* leap years into account
* Return: 0
*/

int main(void)
{
	int largest, a;
	long int num;

	num = 612852475143;

	for (a = 2; num > 1; a++)
	{
		while (num % a == 0)
		{
			largest = a;
			num = num / a;
		}
	}

	printf("%d\n", largest);
	return (0);
}
