#include "main.h"

/**
 * _power - calculates (base ^ power)
 * @b: base
 * @p: power
 *
 * Return: b to the power of p
 */
unsigned long int _power(unsigned int b, unsigned int p)
{
	unsigned long int num;
	unsigned int a;

	num = 1;
	for (a = 1; a <= p; a++)
		num *= b;
	return (num);
}

/**
 * print_binary - prints a number in binary notation
 * @n: number
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int divisor, check;
	char flag;

	flag = 0;
	divisor = _power(2, sizeof(unsigned long int) * 8 - 1);
	while (divisor != 0)
	{
		check = n & divisor;
		if (check == divisor)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || divisor == 1)
		{
			_putchar('0');
		}
		divisor >>= 1;
	}
}
