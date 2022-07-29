#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * errors - prints error message
 * Return: no return
 */
void errors(void)
{
	printf("Error\n");
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
	long double mul = 1;
	int a, b;
	char product[sizeof(mul) * 50000];

	if (argc == 2 || argc > 3 || argc == 1)
	{
		errors();
	}
	for (a = 1; a < argc; a++)
	{
		if (argc == 1)
		{
			errors();
		}
		if (argc == 2)
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
		mul *= strtold(argv[a], NULL);
	}
	sprintf(product, "%1.0Lf", mul);
	puts(product);
	return (0);
}
