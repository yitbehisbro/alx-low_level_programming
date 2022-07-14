#include "main.h"

/**
 * cap_string - change lowercase to upper-case
 * @cs: pointer to char variable
 * Return: Always 0.
 */
char *cap_string(char *cs)
{
	int length, i;
	int separtors[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	length = 0;

	if (*(cs + length) >= 97 && *(cs + length) <= 122)
		*(cs + length) = *(cs + length) - 32;
	length++;

	while (*(cs + length) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(cs + length) == separtors[i])
			{
				if ((*(cs + (length + 1)) >= 97) && (*(cs + (length + 1)) <= 122))
					*(cs + (length + 1)) -= 32;
				break;
			}
		}
		length++;
	}
	return (cs);
}
