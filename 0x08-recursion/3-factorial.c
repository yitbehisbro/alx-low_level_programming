#include "main.h"

/**
 * factorial - prints factorial value
 * @n: number to be factorized
 * Return: Always 0.
 */
int factorial(int n)
{
	int fact;

	fact = 0;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	if (n > 0)
	{
		fact = n * factorial(n - 1);
	}
	return (fact);
}
