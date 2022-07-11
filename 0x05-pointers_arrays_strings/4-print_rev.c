#include "main.h"

/**
 * print_rev - prints a reversed string
 * @s: char variable that holds string value to be print in reverse
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int length = 0;

	while (length >= 0)
	{
		if (s[length] == '\0')
			break;
		length++;
	}

	for (length--; length >= 0; length--)
	{
		_putchar(s[length]);
	}
	_putchar('\n');
}
