#include <unistd.h>

/**
 * _isdigit - check if the input is digit
 * @c: The character to check
 *
 * Return: 1 if uppdercase, 0 else
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
