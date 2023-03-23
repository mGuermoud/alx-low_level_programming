#include <stdio.h>
#include "main.h"

/**
 * main - print prime factor
 * Return: void
 */
int main(void)
{
	long int a = 612852475143;
	long int c = 0;
	long int i = 0;
	int flag = 0;

	for (i = 2; i <= a / 2; i++)
	{
		c = a % i;

		if (c == 0 && (i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i % 7 != 0))
		{
			printf("%ld\n", i);
			flag = 1;
		}
		if (flag == 1)
		{
			break;
		}
	}
	return (0);

}
