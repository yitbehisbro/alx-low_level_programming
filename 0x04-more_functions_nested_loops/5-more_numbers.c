#include "main.h"

/**
 * more_numbers - print numbers 10 time
 *
 * Return: no return
 */
void more_numbers(void)
{
	int f, g;

	for (f = 1; f <= 10; f++)
	{
		for (g = 0; g < 15; g++)
		{
			if (g >= 10)
				_putchar((g / 10) + 48);
			_putchar((g % 10) + 48);
		}
		_putchar('\n');
	}
}
