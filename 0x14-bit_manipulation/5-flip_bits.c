#include "main.h"

/**
 * flip_bits - numbers of different bits between two numbers
 * @n: first value
 * @m: second value
 *
 * Return: number of bits you would need to flip
 * to get from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int difference, check;
	unsigned int counter, i;

	counter = 0;
	check = 1;
	difference = n ^ m;
	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (check == (difference & check))
			counter++;
		check <<= 1;
	}
	return (counter);
}
