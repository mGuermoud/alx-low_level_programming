#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenate two strings into one
 * @dest : 1st param
 * @src : 2nd param
 * @n : 3th param
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int j = 0;
	int len_1 = 0;

	while (*(dest + len_1) != '\0')
	{
		len_1++;
	}
	if (n != 0)
	{
		for (j = 0; j < n && *(src + j) != '\0'; j++)
		{
			*(dest + j + len_1) = *(src + j);
		}
	}
	else
	{
	}

	return (dest);
}
