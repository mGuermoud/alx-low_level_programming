#include <stdio.h>
#include "main.h"

/**
 * _strspn - get the length of a prefix substring
 * @s: 1st param
 * @accept: 2nd param
 * Return: number of bytes in the initial seg of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j = 0;
	int flag = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				flag = 1;
			}
		}
		if (flag == 1)
		{
			flag = 0;
		}
		else
		{
			return (i);
		}
	}
	return (0);
}
