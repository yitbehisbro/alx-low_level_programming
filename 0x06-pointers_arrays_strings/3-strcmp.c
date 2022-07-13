#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: pointer to character var 1
 * @s2: pointer to character var 2
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && (*s1 != '\0' && *s2 != '\0'))
	{
		s1++;
		s2++;
	}

	if (*s1 != *s2)
	{
		return (*s1 - *s2);
	}
	else
	{
		return (0);
	}
}
