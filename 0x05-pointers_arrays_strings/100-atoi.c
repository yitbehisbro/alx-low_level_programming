#include "main.h"

/**
 * atoi - prints integers
 * @s: character that holds string values
 * Return: Always 0.
 */
int _atoi(char *s)
{
	unsigned int size, length, outp, signs, x, y;

	length = 0;
	size = 0;
	outp = 0;
	signs = 1;
	x = 1;

	while (*(s + length) != '\0')
	{
		if (size > 0 && (*(s + length) < '0' || *(s + length) > '9'))
			break;

		if (*(s + length) == '-')
			signs *= -1;

		if ((*(s + length) >= '0') && (*(s + length) <= '9'))
		{
			if (size > 0)
				x *= 10;
			size++;
		}
		length++;
	}

	for (y = length - size; y < length; y++)
	{
		outp = outp + ((*(s + y) - 48) * x);
		x /= 10;
	}
	return (outp * signs);
}
