#include "main.h"
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#define STR_LEN 100

/**
 * keygen - crack generator
 *
 * Return: String with valid password
 */

int keygen(void)
{
	char random_char[STR_LEN];
	int i = 0;
	int n = 0;
	int sum = '0';

	srand(time(NULL));
	
	do {
		random_char[i] = "abcdefghijklmnopqrstuvwxyz"[rand() % 26];
		sum += random_char[i];
		i++;
	} while(sum <= 2772 && i < STR_LEN);
	if (sum > 2772)
	{
		n = sum - 2772;
		random_char[i] = random_char[i] - n;
		random_char[i+1] = '\0';
	}
	i = 0;
	while (random_char[i] != '\0')
	{
		fprintf(stdout, "%c",random_char[i]);
		i++;
	}
	return (0);
}
