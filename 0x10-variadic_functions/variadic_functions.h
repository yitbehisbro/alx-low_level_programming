#ifndef _VARIADIC_FUNCTION_H_
#define _VARIADIC_FUNCTION_H_

#include <stdarg.h>
/**
 * struct datatypes - print types based on the function
 * @dt: data type
 * @f: print function
 */
typedef struct datatypes
{
	char *dt;
	void (*f)(va_list);
} data_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
