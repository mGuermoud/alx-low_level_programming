#include <stdio.h>
#include "main.h"

int sqrt_1(int, int);

/**
 * _sqrt_recursion - print the squart of x
 * @n: first parameter
 * Return: sqrt(n)
 */

int _sqrt_recursion(int n)
{
	return (sqrt_1(1, n));
}

/**
 * sqrt_1 - calculate the square root of y
 * @x: 1st parameter
 * @y: 2nd parameter
 * Return: square of y or -1
 */

int sqrt_1(int x, int y)
{
	if (x * x == y)
	{
		return (x);
	}
	else if (x * x > y)
	{
		return (-1);
	}
	else
	{
		return (sqrt_1(x + 1, y));
	}
}
