#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: char variable that holds string value to be print on stdout
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
	int length;

	length = 0;

	if (*(s + length) == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*(s + length));
	length++;
	_puts_recursion(s + length);
}
