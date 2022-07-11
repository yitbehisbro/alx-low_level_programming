#include "main.h"

/**
 * _strlen - prints the string length
 * @s: variable that holds string values
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int length;

	length = 0;

	while(*s != '\0')
	{
		s++;
		length++;
	}
	return (length);
}
