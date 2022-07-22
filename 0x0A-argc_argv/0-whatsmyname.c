#include <stdio.h>

/**
 * main - prints the name of program
 * @argc: argument that holds the count
 * @argv: vector that holds string
 * Return: 0 in success
 */
int main (int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
