#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint -  converts a binary number to
 * an unsigned int.
 * @b: pointing to a string of 0 and 1 chars.
 *
 * Return: the converted number, or 0 if there is
 * one or more chars in the string b
 * that is not 0 or 1
 *
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	int a = 0;

	if (b == NULL)
		return (0);

	while (b[a] != '\0')
	{
		if (!(b[a] >= 48 && b[a] <= 49))
			return (0);
		else
			i <<= 1;
		i += b[a] - '0';
		a++;
	}
	return (i);
}
