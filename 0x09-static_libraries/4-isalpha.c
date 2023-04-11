#include "main.h"

/**
 * _isalpha - letter checker
 * @c : the character to check
 * Return: 1 if the input is a letter
 */

int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
