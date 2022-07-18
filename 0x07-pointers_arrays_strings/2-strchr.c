#include "main.h"

/**
 * _strchr - the first occernance of c
 * @s: pointer to char string
 * @c: character to be find
 * Return: pointer to s or NULL
 */
char *_strchr(char *s, char c)
{
	unsigned int a = 0;

	for (; *(s + a) != '\0'; a++)
		if (*(s + a) == c)
			return (s + a);
	if (*(s + a) == c)
		return (s + a);
	return ('\0');
}
