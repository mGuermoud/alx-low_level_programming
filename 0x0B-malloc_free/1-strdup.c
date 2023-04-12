#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicate a memory zone
 * @str: array to be duplicated
 *
 * Return: a pointer to the created memory zone
 * On error, NULL is returned.
 */
char *_strdup(char *str)
{
	char *copy = NULL;
	unsigned int l = 0;
	unsigned int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (*(str + l) != '\0')
	{
		l++;
	}
	copy = (char *) malloc(l * sizeof(char));
	if (copy == NULL)
	{
		return (NULL);
	}
	else
	{
		while (i < l)
		{
			*(copy + i) = *(str + i);
			i++;
		}
	}
	return (copy);
}
