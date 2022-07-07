#include "main.h"

/**
 * print_number - prints an integer to the console
 *
 * @n: variable that holds integer value
 *
 * Return: 0 in success
 */
void print_number(int n)
{
	unsigned int e, x, num;

	if (n < 0)
	{
		_putchar(45);
		x = n * -1;
	}
	else
	{
		x = n;
	}

	e = x;
	num = 1;

	while (e > 9)
	{
		e /= 10;
		num *= 10;
	}

	for (; num >= 1; num /= 10)
	{
		_putchar(((x / num) % 10) + 48);
	}
}
