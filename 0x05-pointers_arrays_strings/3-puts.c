#include "main.h"

/**
 * _puts - prints a string
 * @str: char variable that holds string value to be print on stdout
 * Return: Always 0.
 */
void _puts(char *str)
{
	int length;

	length = 0;

	while (length >= 0)
	{
		if (str[length] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[length]);
		length++;
	}
}
