#include <stdio.h>

/**
* main - print all arguments
* Return: 1
*/

int main(int argc, char *argv[])
{
	int i = 1;

	while (i < argc)
	{
		printf("%s\n",argv[i]);
		i++;
	}
	return (1);
}
