#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverse an array
 * @a :array to be inverted
 * @n :array size
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int tmp = 0;

	for (i = 0; i < n / 2; i++)
	{
		tmp = *(a + i);
		*(a + i) = *(a + n - 1 - i);
		*(a + n - 1 - i) = tmp;
	}
}
