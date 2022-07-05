#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints natural numbers to 98
 *
 * @n: natural numbers
 *
 * Return: 0 in success
 *
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	else if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	printf("%d\n", n);
}
