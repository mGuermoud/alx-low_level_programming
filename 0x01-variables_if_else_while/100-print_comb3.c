/*
 * File: 10-print_comb3.c
 * Auth: Mohammed Guermoud
 * Date: 17-03-2023
 */

#include <stdio.h>

/**
 * main - printing all alphabet in lowercase
 * Return: Always 0
 */

int main(void)
{
	int i = '0';
	int j = '1';

	while (i < '9')
	{
		while (j <= '9')
		{
			if (i != j)
			{
				putchar(i);
				putchar(j);
				if (i == '8' && j == '9')
				{
					/* do nothing */
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			else
			{
				/* do nothing */
			}
			j = j + 1;
		}
	i = i + 1;
	j = i;
	}
	putchar(0xA);

	return (0);

}
