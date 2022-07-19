#include "main.h"

/**
 * print_chessboard  - prints the chessboard
 * @board: the chessboard
 *
 * Return: no return value
 */
void print_chessboard(char board[8][8])
{
	int a, b;

	for (a = 0; a < 8; a++)
	{
		for (b = 0; b < 8; b++)
		{
			_putchar(board[a][b]);
		}
		_putchar('\n');
	}
}
