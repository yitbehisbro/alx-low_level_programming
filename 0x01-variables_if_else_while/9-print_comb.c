#include <stdio.h>

/**
 *
 * main - prints single digit numbers
 *
 * Return: 0 in success
 *
 */
int main(void)
{
	int m;

	for (m = 0; m < 10; m++)
	{
		putchar(m + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
