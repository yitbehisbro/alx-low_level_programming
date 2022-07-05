#include "main.h"

/**
 * main - checks if lowercase
 *
 * Return: 0 in success
 *
 */
int main(void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');
	_putchar('\n');
        return (0);
}
