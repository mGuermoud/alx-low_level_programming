#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - print the chessboard
 * @a: 1st param
 * Return: None
 */

void print_chessboard(char (*a)[8])
{
	unsigned int i = 0;
	unsigned int j = 0;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
