#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocate mem for an array
 * @nmemb: first parameter
 * @size: array size
 *
 * Return: pointer to the new memory zone.
 * On error, return NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i = 0;

	if (!nmemb || !size)
		return (NULL);
	ptr = (char *) malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
	{
		ptr[i] = 0;
	}
	return (ptr);

}
