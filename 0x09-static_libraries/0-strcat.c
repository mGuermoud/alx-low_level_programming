#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenate two strings into one
 * @dest : 1st param
 * @src : 2nd param
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int j = 0;
	int len_1 = 0;

	while (*(dest + len_1) != '\0')
	{
		len_1++;
	}
	while (*(src + j) != '\0')
	{
		*(dest + j + len_1) = *(src + j);
		j++;
	}

	return (dest);
}
