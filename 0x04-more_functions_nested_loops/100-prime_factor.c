#include <stdio.h>
#include "main.h"

/**
 * main - print prime factor
 * Return: void
 */
int main(void)
{
	long int a = 612852475143;
	long int i = 0;
	long int tmp1 = 1;
	long int tmp2 = a;

	while (i <= tmp2)
	{
		if (i % 2 != 0 || i % 3 != 0 || i % 5 != 0 || i % 7 != 0)
		{
			if (a % i == 0)
			{
				tmp2 = a / i;
				tmp1 = i;
			}

		}
		i++;
	}
	printf("%ld\n", tmp1);
	return (0);

}
