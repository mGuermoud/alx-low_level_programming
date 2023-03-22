#include "main.h"

/**
 * times_table - print the 9 times table, starting with 0
 * Return: void
 */

void times_table(void)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int a = '0';
	int b = '0';

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			a = k % 10;
			k = k / 10;
			b = k % 10;
			if (b != 0)
			{
				_putchar('0' + b);
			}
			_putchar('0' + a);
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
				if (i * (j + 1) < 10)
				{
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
