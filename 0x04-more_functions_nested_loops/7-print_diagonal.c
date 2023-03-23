#include <unistd.h>
#include "main.h"
/**
 * print_diagonal - print diag
 * @n : number of lines to print
 * Return: void
 */
void print_diagonal(int n)
{
	int i = 0;
	int j = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
		_putchar('\n');
		}
	}
}
