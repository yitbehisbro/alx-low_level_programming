#include "main.h"

/**
 * _strncat - concatenet two string by using at most n bytes from @src
 * @src: pointer to character variable 1
 * @dest: pointer to character variable 2
 * @n: integer values for bytes
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, length, dest_size;

	length = 0;

	while (*(dest + length) != '\0')
	{
		length++;
	}
	dest_size = length;

	for (a = 0 ; a < n && *(src + a) != '\0' ; a++)
                   *(dest + (dest_size + a)) = *(src + a);
	*(dest + (dest_size + a)) = '\0';

	return dest;
}
