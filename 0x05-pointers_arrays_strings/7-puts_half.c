#include "main.h"
#include <stdio.h>

/**
 * puts_half - print half of a string
 * @str: the string to be printed
 * Return: void
 */

void puts_half(char *str)
{
	int i = 0;
	int j = 0;

	if (*str != '\0')
	{
		while (*(str + i) != '\0')
		{
			i++;
		}
		if (i % 2 != 0)
		{
			j = (i - 1)/ 2;
		}
		else
		{
			j = i / 2;
		}
		while (j <= i)
		{
			_putchar(*(str + j));
			j++;
		}
	}
	else
	{
	}
	_putchar('\n');
}
