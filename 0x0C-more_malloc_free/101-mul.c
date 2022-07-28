#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * if_zero - determines if a number is 0
 * @argv: vector
 * Return: no return
 */
void if_zero(char *argv[])
{
	int a, n1 = 1, n2 = 1;

	for (a = 0; argv[1][a]; a++)
		if (argv[1][a] != '0')
		{
			n1 = 0;
			break;
		}

	for (a = 0; argv[2][a]; a++)
		if (argv[2][a] != '0')
		{
			n2 = 0;
			break;
		}

	if (n1 == 1 || n2 == 1)
	{
		printf("0\n");
		exit(0);
	}
}

/**
 * _initialize - set to zero in a new array
 * @ary: char array value
 * @size: size of array
 * Return: pointer to array
 */
char *_initialize(char *ary, int size)
{
	int c = 0;

	for (c = 0; c < size; c++)
		ary[c] = '0';
	ary[size] = '\0';
	return (ary);
}

/**
 * checkpoint - determine length and sign
 * @argv: vector arg
 * @r: num of row
 * Return: size of number
 */
int checkpoint(char *argv[], int r)
{
	int size;

	for (size = 0; argv[r][size]; size++)
		if (!isdigit(argv[r][size]))
		{
			printf("Error\n");
			exit(98);
		}

	return (size);
}

/**
 * main - multiplies two positive numbers
 * @argc: argument that holds the count
 * @argv: vector that holds string
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	char *mymult;
	int n1, n2, out, a, ca, al, x, y, z;

	if (argc != 3)
		printf("Error\n"), exit(98);
	n1 = checkpoint(argv, 1), n2 = checkpoint(argv, 2);
	if_zero(argv), out = n1 + n2, mymult = malloc(out + 1);
	if (mymult == NULL)
		printf("Error\n"), exit(98);
	mymult = _initialize(mymult, out);
	z = out - 1, x = n1 - 1, y = n2 - 1, ca = al = 0;
	for (; z >= 0; z--, x--)
	{
		if (x < 0)
		{
			if (al > 0)
			{
				a = (mymult[z] - '0') + al;
				if (a > 9)
					mymult[z - 1] = (a / 10) + '0';
				mymult[z] = (a % 10) + '0';
			}
			x = n1 - 1, y--, al = 0, ca++, z = out - (1 + ca);
		}
		if (y < 0)
		{
			if (mymult[0] != '0')
				break;
			out--;
			free(mymult), mymult = malloc(out + 1), mymult = _initialize(mymult, out);
			z = out - 1, x = n1 - 1, y = n2 - 1, ca = al = 0;
		}
		if (y >= 0)
		{
			a = ((argv[1][x] - '0') * (argv[2][y] - '0')) + (mymult[z] - '0') + al;
			al = a / 10, mymult[z] = (a % 10) + '0';
		}
	}
	printf("%s\n", mymult);
	return (0);
}
