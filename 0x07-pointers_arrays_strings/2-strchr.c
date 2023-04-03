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
	if (s == NULL)
	{
		return NULL;
	}
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
