#include "main.h"

/**
 * _strchr - find the first occernance of c
 * @s: ponter to char (string)
 * @c: character to be find
 * Return: pointer to s or NULL
 */
char *_strchr(char *s, char c)
{
	for (;; s++)
	{
		if (*s == c)
			return (s);
		if (!*s)
			return ('\0');
        }
	return ('\0');
}
