#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - memory allocation
 * @b : size of memory to be allocated
 *
 * Return: On success 1.
 * On error, exit with statut 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL || b == 0)
	{
		exit(98);
	}
	return (ptr);
}
