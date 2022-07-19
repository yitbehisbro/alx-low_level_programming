#include "main.h"

/**
 * _pow_recursion -  returns the value of x raised to y
 * @x: integer value 1
 * @y: integer value 2
 * Return: Always 0.
 */
int _pow_recursion(int x, int y)
{
	int power;

	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	power = x * _pow_recursion(x, y - 1);
	return (power);
}
