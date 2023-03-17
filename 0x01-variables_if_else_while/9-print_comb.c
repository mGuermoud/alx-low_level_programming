/*
 * File: 9-print_comb.c
 * Auth: Mohammed Guermoud
 * Date: 17-03-2023
 */

#include <stdio.h>

/**
 * main - printing all possible digits combination
 * Return: Always 0
 */

int main(void)
{
	int a = '0';

	while (a <= '9')
	{
		putchar(a);
		if (a != '9')
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar(0xA);
		}
		a++;
	}
	return (0);

}
