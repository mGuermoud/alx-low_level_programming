#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_the_all - sum all the args
 *
 * Return: sum of args
 */

int sum_them_all(cons unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(args, n);
	for (i = 0; i < n; i++)
		sum += va_arg(args, int);
	va_end(args);
	return (sum);
}
