#include <unistd.h>

/**
 * _isupper - check if the input is uppdercase or lowercase
 * @c: The character to check
 *
 * Return: 1 if uppdercase, 0 else
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
