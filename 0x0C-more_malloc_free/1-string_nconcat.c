#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - string concatenation
 * @s1: first string
 * @s2: second string
 * @n: str length to be taken into account
 *
 * Return: pointer to the new memory zone.
 * On error, return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1 = 0, l2 = 0, i = 0, j = 0;
	char *copy;

	while (*(s1 + l1) != '\0')
		l1++;
	while (*(s2 + l2) != '\0')
		l2++;
	if (n < l2)
	{
		copy = (char *) malloc((l1 + n + 1));
	}
	else
	{
		copy = (char *) malloc((l1 + l2 + 1));
	}
	if (copy == NULL)
	{
		return (NULL);
	}
	else
	{
		while (i < l1)
		{
			*(copy + i) = *(s1 + i);
			i++;
		}
		while ((i < l1 + n) && (n < l2))
			*(copy + (i++)) = *(s2 + (j++));
		while ((n >= l2) && (i < l1 + l2))
			*(copy + (i++)) = *(s2 + (j++));
		*(copy + i) = '\0';
	}
	return (copy);
}
