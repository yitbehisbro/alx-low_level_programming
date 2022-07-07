#include "main.h"

/**
 * _isdigit - checks if the input is digit
 *
 * @c: variable that holds the input
 *
 * Return: 0 if digit, else 1
 *
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
