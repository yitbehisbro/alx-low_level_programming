#include "main.h"

/**
 * print_last_digit - prints last digit
 *
 * @n: variable that holds the value of digits
 *
 * Return: 0 in success
 *
 */
int print_last_digit(int n)
{
	int x;

	x = n % 10;

	if (x < 0)
	{
		return (x * -1);
	}
	else
	{
		return (x);
	}
}
