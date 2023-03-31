#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copy a string into another one
 * @dest : 1st param
 * @src : 2nd param
 * @n : 3th param
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	if (dest == NULL || src == NULL || n == 0)
	{
		return (dest);
	}
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
