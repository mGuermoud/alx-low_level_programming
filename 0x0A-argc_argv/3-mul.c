#include <stdio.h>
#include <stdlib.h>

/**
* main - print all arguments
* @argc: first param
* @argv: second param
* Return: 0
*/

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (0);
	}
	else
	{
		return (printf("%d\n", atoi(argv[1]) * atoi(argv[2])));
	}
}
