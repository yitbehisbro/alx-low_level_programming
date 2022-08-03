#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - prints the result
 * @argc: arguments size
 * @argv: vector of arguments
 * Return: 0 in success
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int (*calculate)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}

	calculate = get_op_func(argv[2]);

	if (calculate == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	printf("%d\n", calculate(num1, num2));
	return (0);
}
