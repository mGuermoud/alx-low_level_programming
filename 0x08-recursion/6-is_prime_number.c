#include <stdio.h>
#include "main.h"

int prime_checker(int ,int);

/**
 * _is_prime_number - return 1 if the number is prime
 * @n: the number to be checked
 * Return: 1 if it's prime number , otherwise return 0
 */

int is_prime_number(int n)
{
	return (prime_checker(n, n - 1));
}



int prime_checker(int n, int c)
{
	if (c == 0)
	{
		return (0);
	}
	if (n % c == 0)
	{
		if (c != 1)
		{
			return (0);
		}
		else
		{
			return (1);
		}

	}
	else
	{
		return (prime_checker(n, c-1));
	}
}
