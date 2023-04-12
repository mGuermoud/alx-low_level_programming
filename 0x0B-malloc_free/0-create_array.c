#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of chars
 * @size: size of the array
 * @c: 2nd param
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *create_array(unsigned int size, char c)
{
	char *copy = NULL;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	copy = (char *) malloc(size * (sizeof(char)));
	if (copy == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			*(copy + i) = c;
		}
		return (copy);
	}
}
