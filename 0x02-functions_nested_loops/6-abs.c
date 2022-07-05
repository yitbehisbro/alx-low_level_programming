#include "main.h"

/**
 * _abs - Printout the absolute value of numbers
 *
 * @a: variable that holds the value of numbers
 *
 * Return: 0 in success
 *
 */
int _abs(int a)
{
	if (a < 0)
	{
		return (a * -1);
	}
	else
	{
		return (a);
	}
}
