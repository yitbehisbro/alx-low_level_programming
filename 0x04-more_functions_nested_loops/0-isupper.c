#include "main.h"

/**
 * _isupper - Checks if the letter is uppercase
 *
 * @c: Variable which holds characters ASCII value
 *
 * Return: 0 in success
 *
 */
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
