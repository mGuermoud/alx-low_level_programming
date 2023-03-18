/*
 * File: 102-print_comb5.c
 * Auth: Mohammed Guermoud
 * Date: 17-04-2023
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
	int l = '0';

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j < '9'; j++)
		{
			for (k = i; k <= '9'; k++)
			{
				for (l = j; l <= '9'; l++)
				{	if (i == k && j == l)
					{
						/* do nothing */
					}
					else
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(k);
						putchar(l);
						if (i == '9' && j == '8' && k == '9' && l == '9')
						{
							/* do nothing */
						}
						else
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar(0xA);

	return (0);

}
