#include "main.h"

/**
 * print_to_98 - prints natural numbers to 98
 *
 * @n: natural numbers
 *
 * Return: 0 in success
 *
 */
void print_to_98(int n)
{
	for (n = 1; n < 98; n++)
	{
		_putchar(n + '0');
		if ((n == 98))
			continue;
	}
}
