#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * put_c - puts a char
 * @a: character
 * Return: no return
 */
void put_c(va_list a)
{
	printf("%c", va_arg(a, int));
}

/**
 * put_i - puts an int
 * @b: integer
 * Return: no return
 */
void put_i(va_list b)
{
	printf("%d", va_arg(b, int));
}

/**
 * put_f - puts a float
 * @c: float
 * Return: no return
 */
void put_f(va_list c)
{
	printf("%f", va_arg(c, double));
}

/**
 * put_s - puts a string
 * @d: string
 * Return: no return
 */
void put_s(va_list d)
{
	char *s = va_arg(d, char *);

	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}

/**
 * print_all - prints all data type
 * @format: formats of arguments
 *
 * Return: Always 0.
 */
void print_all(const char * const format, ...)
{
	unsigned int a, b;
	data_t s[] = {
		{"c", put_c},
		{"i", put_i},
		{"f", put_f},
		{"s", put_s},
		{NULL, NULL}
	};
	va_list vlist;
	char *separator = "";

	va_start(vlist, format);
	a = 0;
	while (format && format[a])
	{
		b = 0;
		while (s[b].dt != NULL)
		{
			if (*(s[b].dt) == format[a])
			{
				printf("%s", separator);
				s[b].f(vlist);
				separator = ", ";
				break;
			}
			b++;
		}
		a++;
	}
	va_end(vlist);
	printf("\n");
}
