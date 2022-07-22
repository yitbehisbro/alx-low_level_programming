#include <stdio.h>

/**
 * main - prints the number of arguments
 * @argc: argument that holds the count
 * @argv: vector that holds string
 * Return: 0 in success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc < 0)
	{
		return (-1);
	}
	printf("%d\n", argc - 1);
	return (0);
}
