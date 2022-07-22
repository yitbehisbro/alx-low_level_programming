#include <stdio.h>

/**
 * main - prints all the argument passed
 * @argc: argument that holds the count
 * @argv: vector that holds string
 * Return: 0 - in success
 */
int main(int argc, char *argv[])
{
	int a;

	if (argc < 0)
	{
		return (-1);
	}
	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
