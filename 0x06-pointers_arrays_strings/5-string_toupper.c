#include "main.h"

/**
 * string_toupper - change lowercase to upper-case
 * @cs: pointer to char variable
 * Return: Always 0.
 */
char *string_toupper(char *cs)
{
	int length;

	length = 0;

	while (*(cs + length) != '\0')
	{
		if ((*(cs + length) >= 97) && (*(cs + length) <= 122))
			*(cs + length) -= 32;
		length++;
	}
	return (cs);
}
