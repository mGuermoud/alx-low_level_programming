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
	unsigned int substr_loc = 0;
	unsigned int str_len = 0;
	unsigned int c = 0;

	while (needle[str_len] != '\0')
	{
		str_len++;
	}
	while (haystack[j] != '\0')
	{
		if (haystack[j] == needle[i])
		{
			if (c == 0)
			{
				c = j;
			}
			i++;
			j++;
			substr_loc++;
		}
		else
		{
			if (str_len - 1 == substr_loc)
			{
				return (haystack + c);
			}
			else
			{
				substr_loc = 0;
				c = 0;
			}
			j++;
			i = 0;
		}
	}
	return (haystack + c);
}
