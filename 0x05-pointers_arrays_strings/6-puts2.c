#include "main.h"

/**
 * puts2 - prints some charactes
 * @str: holds string value
 * Return: Always 0.
 */
void puts2(char *str)
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
		if (length % 2 == 0)
			_putchar(str[length]);
		length++;
	}
}
