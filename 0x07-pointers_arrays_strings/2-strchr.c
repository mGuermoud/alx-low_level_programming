#include <stdio.h>
#include "main.h"

/**
 * _strchr - locate a character in a string
 * @s: 1st param
 * @c: 2nd param
 * Return: pointer to s
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (i = 0; *(s + i) >= '\0'; i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
