#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print all natural numbers from n to 98
 * @a : 1st input
 * Return: void
 */

void print_to_98(int a)
{
	int i = a;

	while (i < 98)
	{
		printf("%d, ", i);
		i++;
	}
	while (i > 98)
	{
		printf("%d, ", i);
		i--;
	}
	printf("%d\n", i++);

}
