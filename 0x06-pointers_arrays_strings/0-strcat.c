#include "main.h"

/**
 * _strcat - concatenate strings
 * @dest: pointer to character variable 1
 * @src: pointer to character variable 2
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	char *doit = dest;

	while(*dest != '\0')
	{
		dest++;
	}

	while(*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (doit);
}
