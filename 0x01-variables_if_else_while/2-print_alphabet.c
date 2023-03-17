/*
 * File: 2-print_alphabet.c
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
		putchar(a);
		a++;
	}
	putchar(0xA);
	return (0);

}
