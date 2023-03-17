/*
 * File: 6-print_numberz.c
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
	int a = '0';

	while (a <= '9')
	{
		putchar(a);
		a++;
	}
	putchar(10);
	return (0);

}
