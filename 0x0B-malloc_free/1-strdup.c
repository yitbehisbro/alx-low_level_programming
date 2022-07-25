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
	unsigned int size = 0;

	ss = malloc(sizeof(char));

	if (ss == NULL)
	{
		return('\0');
	}

	while (*(str + size) != '\0')
	{
		*(ss + size) = *(str + size);
		size++;
	}
	return (ss);
	free(ss);
}
