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
	unsigned int l1 = 0, l2 = 0, i = 0;
	char *copy = NULL;

	if (s1 == NULL)
		s1 = "";
	else
		while (*(s1 + l1) != '\0')
			l1++;
	if (s2 == NULL)
	{
		s2 = "";
	}
	else
	{
		while (*(s2 + l2) != '\0')
			l2++;
	}
	copy = (char *) malloc((l1 + l2 + 1) * sizeof(char));
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
		i = 0;
		while (i < n)
		{
			*(copy + i + l1) = *(s2 + i);
			i++;
		}
	}
	return (copy);
}
