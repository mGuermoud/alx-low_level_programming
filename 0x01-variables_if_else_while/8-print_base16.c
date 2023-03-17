/*
 * File: 4-print_alphabt.c
 * Auth: Mohammed Guermoud
 * Date: 17-03-2023
 */

#include <stdio.h>

/**
 * main - printing all digits and alphabet in lowercase
 * Return: Always 0
 */

int main(void)
{
	char a = '0';

	while (a <= 'f')
	{
		putchar(a);
		if (a == '9')
		{
			a = 'a';
		}
		else
		{
			a++;
		}
	}
	putchar(0xA);
	return (0);

}
