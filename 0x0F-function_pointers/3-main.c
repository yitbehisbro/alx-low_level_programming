#include "3-calc.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - prints the result
 * @argc: arguments size
 * @argv: vector of arguments
 * Return: 0 in success
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	int (*f)(int, int);

	if (argc < 4 || argc > 4)
	{
		printf("Erorr\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	f = get_op_func(argv[2]);

	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = f(num1, num2);
	printf("%d\n", result);
	return (0);
}
