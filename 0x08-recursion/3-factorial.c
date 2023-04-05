#include <stdio.h>
#include "main.h"

/**
 * factorial - print factorial of given number
 * @n: 1st param
 * Return: factorial n!
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else if (n == 2)
	{
		return (2);
	}
	{
	return (n * factorial(n - 1));
	}
}

