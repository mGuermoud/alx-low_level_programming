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
	unsigned int i = 0;
	unsigned int n = 0;

	if (s == NULL)
	{
		return (NULL);
	}
	while (*(s + n) != '\0')
	{
		n++;
	}
	for (i = 0; i < n; i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
