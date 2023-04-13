#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: 0
 */
char *str_concat(char *s1, char *s2)
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
		while (i < l2)
		{
			*(copy + i + l1) = *(s2 + i);
			i++;
		}
	}
	return (copy);

}
