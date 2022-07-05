#include "main.h"

/**
 * print_alphabet - prints small letters
 *
 * Return: 0 in success
 *
 */
void print_alphabet(void)
{
	int a;

	for (a = 97; a < 123; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
