#include <stdio.h>
#include <stdlib.h>

/**
 * display_opcodes - print the opcodes
 * @af: function address
 * @num: total number of bytes
 *
 * Return: no return
 */
void display_opcodes(char *af, int num)
{
	int a;

	for (a = 0; a < num; a++)
	{
		printf("%.2hhx", af[a]);
		if (a < num - 1)
			printf(" ");
	}
	printf("\n");

}

/**
 * main - prints the opcodes
 * @argc: number of arguments
 * @argv: vector of arguments
 *
 * Return: always O
 */
int main(int argc, char **argv)
{
	int l;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	l = atoi(argv[1]);
	if (l < 0)
	{
		printf("Error\n");
		exit(2);
	}
	display_opcodes((char *)&main, l);
	return (0);
}
