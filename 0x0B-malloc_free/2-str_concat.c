#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates the strings
 * @s1: first string
 * @s2: second string
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	char *ss;
	unsigned int a, b, c, size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] != '\0'; a++)
		;

	for (b = 0; s2[b] != '\0'; b++)
		;

	ss = malloc(sizeof(char) * (a + b + 1));

	if (ss == NULL)
	{
		free(ss);
		return ('\0');
	}

	for (c = 0; c < a; c++)
		ss[c] = s1[c];

	size = b;
	for (b = 0; b <= size; c++, b++)
		ss[c] = s2[b];

	return (ss);
}
