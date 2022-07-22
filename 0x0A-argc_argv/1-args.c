#include <stdio.h>

/**
 * main - prints the number of arguments
 * @argc: argument that holds the count
 * @argv: vector that holds string
 * Return: 0 in success
 */
int main (int argc, __attribute__((unused)) char *argv[])
{
	if (argc >= 0)
	{
		printf("%d\n", argc - 1);
	}
	else
	{
		return (-1);
	}
	return (0);
}
