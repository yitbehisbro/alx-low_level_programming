#include "main.h"

/**
 * power_to -  returns the value of x raised to y
 * @x: integer value 1
 * @y: integer value 2
 * Return: Always 0.
 */
int power_to(int x, int y)
{
	if (y % (x / y) == 0)
	{
		if (y * (x / y) == x)
			return (y);
		else
			return (-1);
	}
	return (0 + power_to(x, y + 1));
}

/**
 * _sqrt_recursion - prints natural square root value
 * @n: integer value
 * Return: sqrt value unless -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (power_to(n, 2));
}
