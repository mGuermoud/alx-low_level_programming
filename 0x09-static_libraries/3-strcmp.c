#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares two strings
 * @s1 : 1st param
 * @s2 : 2nd param
 * Return: dest
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
