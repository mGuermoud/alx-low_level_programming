#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - print a string len
 * @s: 1st param
 * Return: void
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}

