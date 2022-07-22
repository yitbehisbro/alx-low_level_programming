#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the sum
 * @argc: argument that holds the count
 * @argv: vector that holds string
 * Return: 0 - in success
 */
int main(int argc, char *argv[])
{
	int a, sum;

	for (a = 1; a < argc; a++)
	{
		if (argc == 1)
		{
			printf("0\n");
			exit(0);
		}
		if (atoi(argv[a]) < 0 || !atoi(argv[a]) || argc == 2)
		{
			printf("Error\n");
			exit(0);
			return (1);
		}
		sum += atoi(argv[a]);
	}
	printf("%d\n", sum);
	return (0);
}
