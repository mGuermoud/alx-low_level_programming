#include "main.h"
#include <stdio.h>

/**
 * puts2 - print string
 * @str: the string to be printed
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;

	if (*str != '\0')
	{
		while (*(str + i) != '\0')
		{
			_putchar(*(str + i));
			i = i + 2;
		}
	}
	else
	{
	}
	_putchar('\n');
}
