#include "main.h"

/**
 * _strpbrk - finds the first character in the s
 * @s: string to be scanned
 * @accept: string containing char to match s
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
	int a, b, psn, bools = 0;

	for (a = 0; *(s + a) != '\0'; a++);
	psn = a;
	for (a = 0; *(accept + a) != '\0'; a++)
	{
		for (b = 0; *(s + b) != '\0'; b++)
		{
			if (*(accept + a) == *(s + b))
			{
				if (b <= psn)
				{
					psn = b;
					bools = 1;
				}
			}
		}
	}
	if (bools == 1)
	{
		return (s + psn);
	}
	else
	{
		return ('\0');
	}
}
