#include "main.h"

/**
 * print_times_table - Printout n's time tables
 *
 * @n: integer value for any numbers
 *
 * Return: 0 in success
 *
 */
void print_times_table(int n)
{
	int k, j, s;

	if (n >= 0 && n <= 15)
	{
		for (k = 0; k <= n; k++)
		{
			_putchar(48);
			for (j = 1; j <= n; j++)
			{
				s = k * j;
				_putchar(44);
				_putchar(32);
				if (s <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(s + 48);
				}
				else if (s <= 99)
				{
					_putchar(32);
					_putchar((s / 10) + 48);
					_putchar((s % 10) + 48);
				}
				else
				{
					_putchar(((s / 100) % 10) + 48);
					_putchar(((s / 10) % 10) + 48);
					_putchar((s % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
