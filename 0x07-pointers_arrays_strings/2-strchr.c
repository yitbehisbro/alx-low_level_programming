#include "main.h"

/**
 * _strchr - find the first occernance of c
 * @s: ponter to char (string)
 * @c: character to be find
 * Return: pointer to s or NULL
 */
char *_strchr(char *s, char c)
{
	do
	{
		if (*s == c)
			return (s);
	} while (*s++);

	return ('\0');
}
