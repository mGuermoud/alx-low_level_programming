#include "main.h"

/**
 * print_last_digit - compute the last digit of a number
 * @n : the number to check
 * Return: the last digit of a number
 */

int print_last_digit(int n)
{
	int modulo = 0;

	if (n < 0)
		n = (-1) * n;

	modulo = n % 10;

	_putchar('0' + modulo);

	return (modulo);
}
