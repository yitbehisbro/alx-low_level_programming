#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints the given string
 * @separator: string separator
 * @n: size of passing strings
 *
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int e;
	va_list vlist;
	va_start(vlist, n);

	if (separator != NULL)
	{
		for (e = 0; e < n; e++)
		{
			const char *str = va_arg(vlist, const char*);
			if (str != NULL)
				printf("%s", str);
			if (str == NULL)
				printf("(nil)");
			if (e == (n - 1))
				continue;
			printf("%s", separator);
		}
	}
	va_end(vlist);
	printf("\n");
}
