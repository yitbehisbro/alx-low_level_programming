#include "main.h"

/**
 * more_numbers - print numbers 10 time
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int f, g;

	for (f = 1; f <= 10; f++)
	{
		for (g = 1; g <= 14; g++)
		{
			if (g >= 10)
				_putchar((g / 10) + 48);
			_putchar((g % 10) + 48);
		}
		_putchar('\n');
	}
}
