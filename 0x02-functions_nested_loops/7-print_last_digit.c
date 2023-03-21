#include "main.h"

/**
 * print_last_digit - compute the last digit of a number
 * @n : the number to check
 * Return: the last digit of a number
 */

int print_last_digit(int n)
{
	int modulo = 0;

	modulo = n % 10;
	if (n < 0)
	{
		_putchar('0' - modulo);
		return (-modulo);
	}
	else
	{
		_putchar('0' + modulo);
		return (modulo);
	}
}
