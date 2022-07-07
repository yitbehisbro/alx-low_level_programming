#include "main.h"

/**
 * print_line - prints a line n long
 * @n: variable which hold n number of hyphen
 * Return: no return for void
 */
void print_line(int n)
{
	int m;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (m = 1; m <= n; m++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
