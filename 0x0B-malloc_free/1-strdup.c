#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicates the string
 * @str: strings to be duplicated
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	char *ss;
	unsigned int i, length = 0, size;

	while (*(str + length) != '\0')
	{
		length++;
	}
	size = length;

	ss = malloc(sizeof(char));

	if (str == NULL)
	{
		return ('\0');
	}
	if (ss == NULL)
	{
		return ('\0');
	}

	for (i = 0; i < size; i++)
	{
		if (*(str + size) == '\0')
		{
			return ('\0');
		}
		*(ss + size) = *(str + size);
	}
	/**
	 * while (*(str + size) != '\0')
	 * {
	 *	*(ss + size) = *(str + size);
	 *	size--;
	 * }
	 */
	return (ss);
	free(ss);
}
