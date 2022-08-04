#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: separator of numbers
 * @n: number of arguments or numbers
 *
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int p;
	va_list vlist;
	va_start(vlist, n);

	if (separator != NULL)
	{
		for (p = 0; p < n; p++)
		{
			printf("%d", va_arg(vlist, int));
			if (p == (n - 1))
				continue;
			printf("%s", separator);
		}
	}
	va_end(vlist);
	printf("\n");
}
