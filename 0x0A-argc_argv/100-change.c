#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * change - prints the minimum number of coins
 * @cents: the cents
 * @value: the value
 * @count: minimum count
 * @coins: all the coins
 *
 * Return: an integer
 */
long int change(long int *cents, long int *value,
long int *count, long int *coins)
{
	if (*cents == *value)
		return (*count);

	if ((*value + *coins) - *cents <= 0)
	{
		*value += *coins;
		*count = *count + 1;
	} else
		coins++;
	return (change(cents, value, count, coins));
}
/**
 * main - entry point
 * @argc: argument count
 * @argv: the arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	long int coins[] = {25, 10, 5, 2, 1};
	long int cents, value, count;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = (long int) atoi(argv[1]);
	if (cents < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	value = 0;
	count = 0;
	count = change(&cents, &value, &count, coins);
	printf("%ld\n", count);
	return (0);
}

