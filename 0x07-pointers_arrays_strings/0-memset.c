
#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the block of memory to fill
 * @b: fills the block of memory using the unsigned char conversion of this value
 * @n: number of bytes to be set to the value
 * Return: On success 0.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		*(s + a) = b;
	}
	return (s);
}
