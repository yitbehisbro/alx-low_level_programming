#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints the sum
 * @argc: argument that holds the count
 * @argv: vector that holds string
 * Return: 0 - in success
 */
int main(int argc, char *argv[])
{
	int a, b, sum = 0;

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
			return (1);
			exit(0);
		}
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (!isdigit(argv[a][b]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[a]);
	}
	printf("%d\n", sum);
	return (0);
}
