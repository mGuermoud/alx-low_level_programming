#include <stdio.h>
#include "main.h"

/**
 * print_number - print integer numbers using _putchar
 * Return: void
 */
void print_number(int n)
{
	int isNegative = 0;
	int a = n;
	int tempo = 1;
	int tmp = 0;
	int tmp1 = 0;

	if (n < 0)
	{
		isNegative = 1;
	}
	
	if (isNegative == 1)
	{
		_putchar('-');
	}

	while (a / 10 != 0)
	{
		a = a / 10;
		tmp = tmp + 1;
	}

	while (tmp > 0)
	{
		tempo = 10 * tempo;
		tmp = tmp - 1;
	}

	while (tempo / 10 != 0)
	{
		tmp1 = n / tempo;
		_putchar('0' + tmp1);
		tempo = tempo / 10;
	}
	_putchar('\n');

}
