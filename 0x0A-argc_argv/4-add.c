#include <stdio.h>
#include <stdlib.h>

/**
* main - add all entered args
* Return: 1
*/

int main(int argc, char *argv[])
{
	int i = 0;
	int sum = 0;
	
	if (argc < 3)
	{
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if ((atoi(argv[i]) == 0 && *argv[i] != '0') || (atoi(argv[i]) < 0))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum = sum + atoi(argv[i]);
		}

	}
	printf("%d\n",sum);
	return (sum);
}
