#include "main.h"

/**
 * rot13 - encodes a string into rot13
 * @cs: pointer to char
 * Return: Always 0.
 */
char *rot13(char *cs)
{
	char str_alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13_apply[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int length, i;

	length = 0;

	while (*(cs + length) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(cs + length) == str_alpha[i])
			{
				*(cs + length) = rot13_apply[i];
				break;
			}
		}
		length++;
	}

	return (cs);
}
