/*
 * File: 4-print_alphabt.c
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
	char a = 0x61;

	while (a <= 0x7A)
	{
		if (a == 0x65 || a == 0x71)
		{
			a++;
		}
		else
		{
			putchar(a);
			a++;
		}
	}
	putchar(0xA);
	return (0);

}
