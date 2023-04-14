#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - create an array of int
 * @min: first parameter
 * @max: second parameter
 *
 * Return: pointer to the new memory zone.
 * On error, return NULL
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i = 0;

	if (min > max)
		return (NULL);
	ptr = (int *) malloc((max - min + 1) * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < max - min + 1; i++)
	{
		ptr[i] = i + min;
	}
	return (ptr);

}
