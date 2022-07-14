#include "main.h"

/**
 * cap_string - change lowercase to upper-case
 * @cs: pointer to char variable
 * Return: Always 0.
 */
char *cap_string(char *cs)
{
	int length;

	length = 0;

	while (*(cs + length) != '\0')
	{
		if ((*(cs + length) >= 97 && *(cs + length) <= 122) && (*((cs + length) - 1) == 32 || *((cs + length) - 1) == 9 || *((cs + length) - 1) == 10 || *((cs + length) - 1) == 125 || *((cs + length) - 1) == 123 || *((cs + length) - 1) == 46 || *((cs + length) - 1) == 44 || *((cs + length) - 1) == 63 || *((cs + length) - 1) == 33 || *((cs + length) - 1) == 59 || *((cs + length) - 1) == 40 || *((cs + length) - 1) == 41 || *((cs + length) - 1) == 33))
			*(cs + length) -= 32;
		length++;
	}
	return (cs);
}
