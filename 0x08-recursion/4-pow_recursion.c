#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - print the value of x raised to the pow of y
 * @x: first parameter
 * @y: second parameter
 * Return: x pow y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
