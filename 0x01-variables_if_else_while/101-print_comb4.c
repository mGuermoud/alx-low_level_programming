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
	int j = '0';
	int k = '0';

	while (i < '9')
	{
		while (j <= '9')
		{
			while (k <= '9')
			{
				if (i != j && k != j)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i == '7' && j == '8' && k == '9')
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
				k = k + 1;
			}
		j = j + 1;
		k = j;
		}
	i = i + 1;
	j = i;
	}
	putchar(0xA);
	return (0);

}
