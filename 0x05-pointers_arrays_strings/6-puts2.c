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
	int j = 0;

	if (*str != '\0')
	{
		while (*(str + i) != '\0')
		{
			i++;
		}
		i++;
		while (*(str + j) != '\0' && *(str + j + 1) != '\0')
		{
			_putchar(*(str + j));
			j = j + 2;
		}
	}
	else
	{
	}
	_putchar('\n');
}
