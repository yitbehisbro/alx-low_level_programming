/* Filename: 102-print_comb5.c AND Author: Yitbarek Wendimu */

#include <stdio.h>

/**
 * main - Prints the four digits combination meaningfully
 *
 * Return: 0 in success
 *
 */
int main(void)
{
	int a;
	int b;

	for (a = 0; a <= 98; a++)
	{
		for (b = a + 1; b <= 99; b++)
		{
			putchar(a + '0');
			putchar(' ');
			putchar(b + '0');
			if ((a == 98) && (b == 99))
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	/* Return: Return 0 in success */
	return (0);
}
