#include <stdio.h>
#include "main.h"

/**
 * _memcpy - fill memory with a constant byte
 * @dest: 1st param
 * @src: 2nd param
 * @n: third param
 * Return: pointer to s
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	if (dest == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
