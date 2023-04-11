#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - search a string for any of a set of bytes
 * @s: 1st param
 * @accept: 2nd param
 * Return: number of bytes in the initial seg of s
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (0);
}
