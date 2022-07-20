#include "main.h"

/**
 * _strlength - returns the length of string
 * @st: string value
 * Return: length of strings
 */
int _strlength(char *st)
{
	if (*st == '\0')
		return (0);
	else
		return (1 + _strlength(st + 1));
}

/**
 * if_palindrome - checks if a string is a palindrome
 * @a: left hand index
 * @b: right hand index
 * @ptr: palindrome pointer
 * Return: 1 if palindrome else 0
 */
int if_palindrome(int a, int b, char *ptr)
{
	if (a >= b)
		return (1);
	else if (ptr[a] != ptr[b])
		return (0);
	else
		return (if_palindrome(a + 1, b - 1, ptr));
}

/**
 * is_palindrome - decides if a string is a palindrome
 * @s: string value
 * Return: 1 if palindrome else 0
 */
int is_palindrome(char *s)
{
	int k;

	k = _strlength(s) - 1;
	return (if_palindrome(0, k, s));
}
