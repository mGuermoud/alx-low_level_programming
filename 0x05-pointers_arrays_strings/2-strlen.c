#include "main.h"
#include <stdio.h>

/**
 * _strlen - return string len
 * @s: string input
 * Return: retunr input len.
 */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
