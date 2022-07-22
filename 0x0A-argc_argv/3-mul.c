#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the multiplication
 * @argc: argument that holds the count
 * @argv: vector that holds string
 * Return: 0 - in success
 */
int main(int argc, char *argv[])
{
	int a, b;
	long int result;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);

	result = a * b;
	printf("%ld\n", result);
	return (0);
}
