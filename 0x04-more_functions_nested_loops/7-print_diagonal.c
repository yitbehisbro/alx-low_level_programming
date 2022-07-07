#include "main.h"

/**
 * print_diagonal - prints a diagonal line n time long
 * @n: variable which hold n number of back slash
 * Return: no return for void
 */
void print_diagonal(int n)
{
	int m, k;

	for (m = 0; m < n; m++)
	{
		for (k = 0; k < m; k++)
		{
			_putchar(' ');
		}
		_putchar(92);
		if (m < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
