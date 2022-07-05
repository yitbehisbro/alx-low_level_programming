#include "main.h"

/**
 * jack_bauer - prints minute in 24 hr
 *
 * Return: 0 in success
 *
 */
void jack_bauer(void)
{
	int w, x;

	for (w = 0; w < 24; w++)
	{
		for (x = 0; x <= 59; x++)
		{
			_putchar((w / 10) + '0');
			_putchar((w % 10) + '0');
			_putchar(':');
			_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');

			if ((w == 24) && (x == 59))
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
