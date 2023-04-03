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
	
	if (s == NULL) 
	{
		return (NULL);
	}
	for (i = 0; i < n; i++)
	{
		*(s+i) = b;
	}
	return (s);
}
