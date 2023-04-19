#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - prints a name passed by address
 * @name: name of the person
 * @f: the function that print a name as is or in uppercase
 *
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
	{
		((*f)(name));
	}
}
