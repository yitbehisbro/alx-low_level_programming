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
		if ((*(cs + length) >= 97) && (*(cs + length) <= 122) && (*((cs + length) - 1) == '\n' || *((cs + length) - 1) == '\t' || *((cs + length) - 1) == ' ' || *((cs + length) - 1) == ',' || *((cs + length) - 1) == '-' || *((cs + length) - 1) == '.' || *((cs + length) - 1) == '/' || *((cs + length) - 1) == '(' || *((cs + length) - 1) == ')' || *((cs + length) - 1) == '!' || *((cs + length) - 1) == '?' || *((cs + length) - 1) == '\"' || *((cs + length) - 1) == ';' || *((cs + length) - 1) == '}' || *((cs + length) - 1) == '{'))
			*(cs + length) -= 32;
		length++;
	}
	return (cs);
}
