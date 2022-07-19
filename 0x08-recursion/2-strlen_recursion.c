#include "main.h"

/**
 * _strlen_recursion - prints length of string
 * @s: string value
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
	int length;

	length = 0;

	if (*(s + length) != '\0')
	{
		length = length + _strlen_recursion(s + 1);
		length++;
		return (length);
	}
	return (0);
}
