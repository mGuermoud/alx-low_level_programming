#include <stdio.h>

/**
 * array_iterator - execute a function given as a parameter
 * @array: the array to be checked
 * @size: size of an array
 * @action: function passed by address
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	if (!array || !action)
		return;
	for (i = 0; i < (int)size; i++)
	{
		action(array[i]);
	}
}
