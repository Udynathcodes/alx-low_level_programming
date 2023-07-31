#include "main.h"
/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int r;
	int j;

	for (r = 0; r < 8; r++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[r][j]);
		_putchar('\n');
	}
}

