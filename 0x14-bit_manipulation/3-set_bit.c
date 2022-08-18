#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: pointer to number
 * @index: index at which to set bit
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int order;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	order = 1 << index;
	*n = *n | order;
	return (1);
}
