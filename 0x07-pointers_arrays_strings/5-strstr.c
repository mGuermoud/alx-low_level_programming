#include <stdio.h>
#include "main.h"

/**
 * _strstr - search a substring
 * @haystack: 1st param
 * @needle: 2nd param
 * Return: number of bytes in the initial seg of s
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0;
	unsigned int j = 0;

	if (needle[0] == '\n')
	{
		return (haystack);
	}
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[j + i] != needle[j])
						{
						break;
						}
			}
			if (needle[j] == '\0')
				return (haystack + i);
		}
	}
	return ('\0');
}
