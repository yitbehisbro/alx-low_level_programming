#include "main.h"

/**
 * power_to -  returns the value of x raised to y
 * @x: integer value 1
 * @y: integer value 2
 * Return: Always 0.
 */
int power_to(int n, int c)
{
	if (c % (n / c) == 0)
	{
		if (c * (n / c) == n)
			return (c);
		else
			return (-1);
	}
	return (0 + power_to(n, c + 1));
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
