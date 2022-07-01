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
		for (b = 1; b < 10; b++)
		{
			putchar(a + '0');
			putchar(b + '0');
			if ((b == 9) && (a == 8))
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
