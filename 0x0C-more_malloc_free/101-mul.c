#include "main.h"
#include <stdlib.h>

/**
 * multiply - multiplies the chars point to dest
 * @c: char value to multiply
 * @num: string to multiply
 * @inum: non NULL index
 * @dest: destination pointer
 * @idest: max index to addition
 * Return: pointer to dest else NULL
 */
char *multiply(char c, char *num, int inum, char *dest, int idest)
{
	int a, b, add, radd, mul, rmul;

	rmul = radd = 0;
	for (a = inum, b = idest; a >= 0; a--, b--)
	{
		mul = (c - '0') * (num[a] - '0') + rmul;
		rmul = mul / 10;
		add = (dest[b] - '0') + (mul % 10) + radd;
		radd = add / 10;
		dest[b] = add % 10 + '0';
	}
	for (radd += rmul; b >= 0 && radd; b--)
	{
		add = (dest[b] - '0') + radd;
		radd = add / 10;
		dest[b] = add % 10 + '0';
	}
	if (radd)
	{
		return (NULL);
	}
	return (dest);
}
/**
 * is_digits - checks if digits
 * @aptr: pointer to arguments
 * Return: 0 if true else 1
 */
int is_digits(char **aptr)
{
	int o, p;

	for (o = 1; o < 3; o++)
	{
		for (p = 0; aptr[o][p]; p++)
		{
			if (aptr[o][p] < '0' || aptr[o][p] > '9')
				return (1);
		}
	}
	return (0);
}

/**
 * _initalize - it initializes a char
 * @xtr: sting value
 * @s: size of strinf
 * Return: no return
 */
void _initalize(char *xtr, int s)
{
	int b;

	for (b = 0; b < s; b++)
		xtr[b] = '0';
	xtr[b] = '\0';
}

/**
 * _printf - swap str one place to the left
 * @str: a string
 * @s: size of string
 * Return: no return
 */
void _printf(char *str, int s)
{
	int x, y;

	x = y = 0;
	while (x < s)
	{
		if (str[x] != '0')
			y = 1;
		if (y || x == s - 1)
			_putchar(str[x]);
		x++;
	}

	_putchar('\n');
	free(str);
}

/**
 * main - prints the mult
 * @argc: argument that holds the count
 * @argv: vector that holds string
 * Return: 0 - in success else 98
 */
int main(int argc, char *argv[])
{
	int a, b, len1, len2, length;
	char *ab;
	char *t0;
	char er[] = "Error\n";

	if (argc != 3 || is_digits(argv))
	{
		for (b = 0; er[b]; b++)
			_putchar(er[b]);
		exit(98);
	}
	for (len1 = 0; argv[1][len1]; len1++)
		;
	for (len2 = 0; argv[2][len2]; len2++)
		;
	length = len1 + len2 + 1;
	ab = malloc(length * sizeof(char));
	if (ab == NULL)
	{
		for (b = 0; er[b]; b++)
			_putchar(er[b]);
		exit(98);
	}
	_initalize(ab, length - 1);
	for (b = len2 - 1, a = 0; b >= 0; b--, a++)
	{
		t0 = multiply(argv[2][b], argv[1], len1 - 1, ab, (length - 2) - a);
		if (t0 == NULL)
		{
			for (b = 0; er[b]; b++)
				_putchar(er[b]);
			free(ab);
			exit(98);
		}
	}
	_printf(ab, length - 1);
	return (0);
}
