#include "main.h"

/**
 * puts_half - prints half charactes
 * @str: holds string value
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int length, size, length2;

	length = 0;

	while (*(str + length) != '\0')
	{
		length++;
	}
	size = length;

	if (size % 2 == 0)
	{
		length2 = size / 2;

		while (length2 > 0)
		{
			if (str[length2] == '\0')
			{
				_putchar('\n');
				break;
			}
			_putchar(str[length2]);
			length2++;
		}
	}
	else
	{
		length2 = (size - 1) / 2;

		while (length2 > 0)
		{
			if (str[length2] == '\0')
			{
				_putchar('\n');
				break;
			}
			_putchar(str[length2]);
			length2++;
		}
	}
}

