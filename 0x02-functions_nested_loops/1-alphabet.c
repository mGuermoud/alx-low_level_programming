#include "main.h"

/**
 * 1-alphabet - print alphabet in lower case
 * Return: always 0
 */

void print_alphabet(void)
{
	/* declare local variable */
	int a='a';

	while(a <= 122 )
	{
		_putchar(a);
		a = a + 1;
	}
	_putchar('\n');

}
