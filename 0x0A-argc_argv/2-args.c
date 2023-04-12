#include <stdio.h>

/**
* main - print all arguments
* @argc: first param
* @argv: second param
* Return: 0
*/

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
