#include <stdio.h>
#include <stdlib.h>

/**
* main - print all arguments
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
		return (printf("%d\n",atoi(argv[1]) * atoi(argv[2])));
	}
}
