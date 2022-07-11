#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: variable that holds the value of variable
 * @src: sting values
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int length, a, size;

	length = 0;

	while (*(src + length) != '\0')
	{
		length++;
	}
	size = length;

	for (a = 0; a < size && *(src + a) != '\0'; a++)
		*(dest + a) = *(src + a);

	return (dest);
}
