#include "3-calc.h"

/**
 * op_add - adds two numbers
 * @a: first value
 * @b: second value
 *
 * Return: sumation
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subctracts numbers
 * @a: first value
 * @b: second value
 *
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers.
 * @a: first value
 * @b: second value
 *
 * Return: products
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers.
 * @a: first value
 * @b: second value
 *
 * Return: division.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - calculates the module
 * @a: first value
 * @b: second value
 *
 * Return: remainder
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
