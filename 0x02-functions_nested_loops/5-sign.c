#include "main.h"

/**
 * print_sign - printout the sign of the numbers
 *
 * @n: variable for numbers or int values
 *
 * Return: 1 for positve, -1 for negative and 0 unless
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
