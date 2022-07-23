#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * change - prints the minimum number of coins
 * @cents: the cents
 * @value: the value
 * @count: minimum count
 * @coins: all the coins
 * @index: coins array iterator
 *
 * Return: an integer
 */
int change(int cents, int value, int count, int coins[5], int index)
{
	if (cents == value)
		return (count);

	if ((value + coins[index] - cents) <= 0)
	{
		value += coins[index];
		count++;
	} else
		index++;
	return (change(cents, value, count, coins, index));
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
	int coins[] = {25, 10, 5, 2, 1};
	int count, cents;

	cents = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	count = change(cents, 0, 0, coins, 0);
	printf("%d\n", count);
	return (0);
}
