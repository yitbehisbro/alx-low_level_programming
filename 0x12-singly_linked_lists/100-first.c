#include <stdio.h>

/**
 * very_before - prints text before main
 *
 * Return: no return
 */

void __attribute__ ((constructor)) very_before()
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
