#include "main.h"

/**
 * print_alphabet_x10 - prints small letter 10 more times
 *
 * Return: 0 in success
 *
 */
void print_alphabet_x10(void)
{
	int x, y;

	for (x = 1; x <= 10; x++)
	{
		for (y = 97; y < 123; y++)
		{
			_putchar(y);
		}
		_putchar('\n');
	}
}
