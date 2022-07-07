#include "main.h"

/**
 * print_numbers - prints numbers 0 through 9
 *
 * Return: 0 in success
 */
void print_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
