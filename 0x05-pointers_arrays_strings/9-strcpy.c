#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: variable that holds the value of variable
 * @src: sting values
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int length;

	length = 0;

	while (length >= 0)
	{
		*(dest + length) = *(src + length);
		if (*(src + length) == '\0')
			break;
		length++;
	}
	return (dest);
}
