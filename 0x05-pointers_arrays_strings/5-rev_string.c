#include "main.h"
#include <stdio.h>

/**
 * rev_string - print string in reverse
 * @s: the string to be printed
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0;
	int c = 0;
	int j = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	i--;
	while (i != j)
	{
		c = *(s + i);
		*(s + i) = *(s + j);
		*(s + j) = c;
		i--;
		j++;
	}
}
