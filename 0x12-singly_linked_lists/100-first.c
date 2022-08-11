#include "lists.h"
#include <stdio.h>

/**
 * before_main - prints text before main
 * Return: no return
 */
void before_main(void) __attribute__ ((destructor))
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
