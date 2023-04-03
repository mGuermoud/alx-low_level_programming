#include <stdio.h>
#include "main.h"

/**
 * _memset - fill memory with a constant byte
 * @s: 1st param
 * @b: 2nd param
 * @n: third param
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	char **p = &s;

	for (i = 0; i < n; i++)
	{
		**p = b;
		*p = *p + 0x01;
	}
	return (s);
}
