#include "main.h"

/**
 * times_table - prints 9 times table
 *
 * Return: 0 in success
 *
 */
void times_table(void)
{
	int k, j, s;

	for (k = 0; k < 10; k++)
	{
		_putchar(48);
		for (j = 1; j < 10; j++)
		{
			s = k * j;
			_putchar(44);
			_putchar(32);
			if (s <= 9)
			{
				_putchar(32);
				_putchar(s + 48);
			}
			else
			{
				_putchar((s / 10) + 48);
				_putchar((s % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
