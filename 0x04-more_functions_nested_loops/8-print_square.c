#include <unistd.h>
#include "main.h"
/**
 * print_square - print square
 * @size : number of squares to print
 * Return: void
 */
void print_square(int size)
{
	int i = 0;
	int j = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
		if (i < size)
		{
			_putchar('\n');
		}
	}
}
