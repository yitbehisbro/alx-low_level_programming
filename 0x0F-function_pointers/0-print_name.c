#include "function_pointers.h"

/**
 * print_name - prints the name
 * @name: the string to print
 * @f: function pointers
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
