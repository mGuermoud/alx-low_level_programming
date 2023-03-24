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
	long int temp = 0;

	for (i = 2; i <= a / 2; i++)
	{
		c = a % i;
		if (c == 0 && (i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i % 7 != 0))
		{
			temp = i;
			break;
		}
	}
	while (temp % 2 != 0 && temp % 3 != 0 && temp % 5 != 0 && temp % 7 != 0)
	{
		temp = a / temp;
	}
	printf("%ld\n", temp);
	return (0);

}
