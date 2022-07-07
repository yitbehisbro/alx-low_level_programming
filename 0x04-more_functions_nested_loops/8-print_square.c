
#include "main.h"

/**
 * print_square - prints square hash
 * @size: variable that holds the size of square
 * Return: Always 0.
 */
void print_square(int size)
{
	int t, x;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (t = 1; t <= size; t++)
		{
			for (x = 0; x < size; x++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
