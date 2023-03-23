#include <unistd.h>
#include "main.h"
/**
 * more_numbers - print digits from 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
	int i = 0;
	int j = 0;
	int modulo = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar('0' + 1);
			}
			modulo = j % 10;
			_putchar('0' + modulo);
		}
	_putchar('\n');
	}
}
