#include "main.h"
/**
 * print_chessboard - Entry point
 * @a: what its feeded
 * Description: function to print chessboard
 */
void print_chessboard(char (*a)[8])
{
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
			putchar(a[i][j]);
	_putchar("\n");
	}
}
