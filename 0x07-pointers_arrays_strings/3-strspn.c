#include "main.h"

/**
 * _strspn - prints length of substring
 * @s: pointer to string to be scanned
 * @accept: strings to compared
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b, c;

	for (a = 0; *(s + a) != '\0'; a++)
	{
		c = 1;
		for (b = 0; *(accept + b) != '\0'; b++)
		{
			if (*(s + a) == *(accept + b))
			{
				c = 0;
				break;
			}
		}
		if (c == 1)
			break;
	}
	return (a);
}
