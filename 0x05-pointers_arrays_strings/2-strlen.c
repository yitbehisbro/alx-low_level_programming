#include "main.h"

/**
 * _strlen - prints the string length
 *
 * @s: variable that holds string values
 *
 * Return: the length of the given string
 *
 */
int _strlen(char *s)
{
	int length;

	length = 0;

	while (*(s + length) != '\0')
	{
		length++;
	}
	return (length);
}
