#include "main.h"

/**
 * _strncpy - copy strings
 * @dest: pointer values to character var 1
 * @src: pointer values to character var 2
 * @n: integer values for byte
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; *(src + a) != '\0' && a < n; a++)
		*(dest + a) = *(src + a);

	for ( ; a < n; a++)
		*(dest + a) = '\0';

	return (dest);
}
