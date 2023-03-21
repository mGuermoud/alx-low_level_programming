#include "main.h"

/**
 * print_sign - sign checker
 * @n : the number to check
 * Return: 1 if the input is greater than zero
 *         0 if the input is zero
 *         -1 if the input is negatif
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
