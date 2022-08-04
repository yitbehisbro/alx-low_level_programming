#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - prints sumation
 * @n: number of arguments
 *
 * Return: sum of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum_all = 0;
	unsigned int e;
	va_list vlist;

	if (n == 0)
	{
		return (0);
	}
	va_start(vlist, n);

	for (e = 0; e < n; e++)
	{
		sum_all += va_arg(vlist, int);
	}
	va_end(vlist);
	return (sum_all);
}
