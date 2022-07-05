#include "main.h"

/**
 * print_last_digit - Printout last digit
 *
 * @c: variable that holds the value of digits
 *
 * Return: 0 in success
 *
 */
int print_last_digit(int c)
{
	int x;

	x = c % 10;

	if (x < 0)
	{
		_putchar(-x + 48);
		return (-x);
	}
	else
	{
		_putchar(x + 48);
		return (x);
	}
}
