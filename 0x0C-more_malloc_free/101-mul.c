#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * errors - prints error message
 * Return: no return
 */
void errors(void)
{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
	exit(98);
}
/**
 * main - prints the mult
 * @argc: argument that holds the count
 * @argv: vector that holds string
 * Return: 0 - in success
 */
int main(int argc, char *argv[])
{
	long int a, b, mul = 1;

	for (a = 1; a < argc; a++)
	{
		if (argc == 1)
		{
			errors();
		}
		if (atoi(argv[a]) < 0 || !atoi(argv[a]) || argc == 2)
		{
			errors();
		}
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (!isdigit(argv[a][b]))
			{
				errors();
			}
		}
		mul *= atoi(argv[a]);
	}
	printf("%ld\n", mul);
	return (0);
}
