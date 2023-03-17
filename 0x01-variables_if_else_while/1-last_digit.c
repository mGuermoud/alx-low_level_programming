#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#define LAST_DIGIT(x) ((x) % 10)
/**
 * main - code generator using rand function
 * Return: void
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (LAST_DIGIT(n) > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, LAST_DIGIT(n));
	}
	else if (LAST_DIGIT(n) == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, LAST_DIGIT(n));
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n"
				, n, LAST_DIGIT(n));
	}

	return (0);
}
