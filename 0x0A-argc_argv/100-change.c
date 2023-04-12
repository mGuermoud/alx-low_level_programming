#include <stdio.h>
#include <stdlib.h>

/**
* main - minimum number of coins to make change for an amount of money
* @argc: first param
* @argv: second param
* Return: 0 or 1
*/

int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int i = 0, j = 0;
	int result = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	j = atoi(argv[1]);
	if (j < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5 && j >= 0; i++)
	{
		while (j >= coins[i])
		{
			result = result + 1;
			j = j - coins[i];
		}
	}
	printf("%d\n", result);
	return (0);
}
