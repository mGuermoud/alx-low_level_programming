#include <stdio.h>
#include <stdlib.h>

/**
* main - print all arguments
* @argc: first param
* @argv: second param
* Return: 1
*/

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int a = atoi(argv[1]) * atoi(argv[2]);

		return (printf("%d\n", a));
	}
}
