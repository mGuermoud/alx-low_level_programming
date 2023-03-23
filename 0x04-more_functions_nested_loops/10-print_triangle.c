#include <unistd.h>
#include "main.h"
/**
 * print_triangle - print triangle
 * @size : number of lines to print
 * Return: void
 */
void print_triangle(int size)
{
	int i = 0;
	int c = 0;
	int k = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (k = 0; k < size - c - 1; k++)
			{
				_putchar(' ');
			}
			c++;
			for (k = 0; k < c; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
