#include "main.h"

/**
 * _isalpha - checks if input is an alphabet or not
 *
 * @c: Variable which reserves ASCII value or code equivalence
 *
 * Return: 0 if false; 1 if true
 *
 */
int _isalpha(int c)
{
	if ((c >= 97) && (c <= 122))
	{
		return (1);
	}
	else if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
