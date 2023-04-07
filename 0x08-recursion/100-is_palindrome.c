#include <stdio.h>
#include "main.h"
#include <string.h>

int palindrome_check(char *, int, int);
int str_len(char *);

/**
 * is_palindrome - print the squart of x
 * @s: first parameter
 * Return: 1 if it's palindrome
 */

int is_palindrome(char *s)
{
	return (palindrome_check(s, 0, strlen(s) - 1));
}

/**
 * palindrome_check - check for palindrome
 * @s: first param
 * @start: second param
 * @end: third param
 * Return: 1 if it's palindrome
 */

int palindrome_check(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (palindrome_check(s, start + 1, end - 1));
}
