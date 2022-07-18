#include "main.h"

/**
 * _strstr - finds the first substring
 *
 * @haystack: string to be scanned
 * @needle: substring to scan
 *
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *a = haystack;
		char *b = needle;

		while (*haystack != '\0' && *b != '\0' && *haystack == *b)
		{
			haystack++;
			b++;
		}
		if (!*b)
			return (a);
		haystack = a + 1;
	  }
	  return ('\0');
}
