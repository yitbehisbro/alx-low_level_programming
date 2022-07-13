#include "main.h"

/**
 * leet - encodes a string into 1337
 * @cs: pointer to char
 * Return: Always 0.
 */
char *leet(char *cs)
{
	int length, i;
	char cap_str[6] = {'A', 'E', 'O', 'T', 'L', '\0'};
	char lower_str[6] = {'a', 'e', 'o', 't', 'l', '\0'};
	char digit_str[6] = {'4', '3', '0', '7', '1', '\0'};

	length = 0;

	while (*(cs + length) != '\0')
	{
		for (i = 0; i < 5; i++)
			if (cap_str[i] == *(cs + length) || lower_str[i] == *(cs + length))
				*(cs + length) = digit_str[i];	
		length++;		
	}
	return (cs);
}
