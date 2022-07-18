#include "main.h"

/**
 * _strspn - prints length of substring
 * @s: pointer to string to be scanned
 * @accept: strings to compared
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;

	if ((*s == '\0') || (*accept == '\0'))
		return (length);

	while (*s && _strchr(accept, *s++))
	{
		length++;
	}
    return (length);
}
