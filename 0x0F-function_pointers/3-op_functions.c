#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - adds the number
 * @a: value 1
 * @b: value 2
 * Return: the sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substract the number
 * @a: value 1
 * @b: value 2
 * Return: the substaction
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply the number
 * @a: value 1
 * @b: value 2
 * Return: the product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides the number
 * @a: value 1
 * @b: value 2
 * Return: the quotent
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Erorr\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulate the number
 * @a: value 1
 * @b: value 2
 * Return: the reminder
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Erorr\n");
		exit(100);
	}
	return (a % b);
}
