#include "main.h"

/**
 * _memcpy - copies n bytes from memory area
 * @dest: memory area 1
 * @src: memory area 2
 * @n: size
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		*(dest + a) = *(src + a);

	return (dest);
}
