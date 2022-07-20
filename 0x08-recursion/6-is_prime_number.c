#include "main.h"

/**
 * is_prime - Checks if, if the number is prime
 * @a: integer value for factor
 * @b: numbers if prime
 * Return: 1 if b is prime else 0
 */
int is_prime(int a, int b)
{
	if (b < 2 || b % a == 0)
		return (0);
	else if (a > b / 2)
		return (1);
	else
		return (is_prime(a + 1, b));
}
/**
 * is_prime_number - Decides, if the number prime
 * @n: integer numbers to be checked
 * Return: 1 if n is prime else 0
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (is_prime(2, n));
}
