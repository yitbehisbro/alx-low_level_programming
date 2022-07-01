/**
 * Filename: 100-print_comb3.c
 * Author: Yitbarek Wendimu
 *
 */
#include <stdio.h>

/**
 * main - prints combination of two digits
 *
 * Return: 0 in success
 *
 */
int main(void)
{
	int a;
	int b;

	for (a = 0; a <= 8; a++)
	{
		putchar(a + '0');
		for (b = 1; b < 10; b++)
		{
			putchar(b + '0');
		}
	}
	putchar('\n');
	return (0);
}
