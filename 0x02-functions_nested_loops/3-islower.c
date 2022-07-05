#include "main.h"

/**
 * _islower - Checks whether the letter is lowercase or not
 *
 * Return: 0 in success
 *
 */
int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
