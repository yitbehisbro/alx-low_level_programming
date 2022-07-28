#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatnates string
 * @s1: string 1
 * @s2: string 2
 * @n: size of contnating string
 * Return: NULL if allocation fail else pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *conc;
	unsigned int a, len1, len2, length;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;

	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	if (n > len2)
		n = len2;

	length = len1 + n;

	conc = malloc(length + 1);

	if (conc == NULL)
		return ('\0');

	for (a = 0; a < length; a++)
		if (a < len1)
			conc[a] = s1[a];
		else
			conc[a] = s2[a - len1];

	conc[a] = '\0';

	return (conc);
}
