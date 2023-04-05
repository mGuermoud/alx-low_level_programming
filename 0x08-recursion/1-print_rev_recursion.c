#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - print a string followed by a new line
 * @s: 1st param
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		/* _putchar('\n'); */
	}
	else
	{
		_print_rev_recursion((s + 1));
		_putchar(*s);
	}
}

