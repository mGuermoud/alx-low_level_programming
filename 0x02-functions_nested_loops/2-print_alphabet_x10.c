#include "main.h"

/**
 * print_alphabet_x10 - print alphabet ten times in lower case
 * Return: always 0
 */

void print_alphabet_x10(void)
{
	/* declare local variable */
	int a = 'a';
	int i = 0;

	for (i = 0; i <= 9; i++)
	{
		while (a <= 122)
		{
			_putchar(a);
			a = a + 1;
		}
		_putchar('\n');
		a = 'a';
	}

}
