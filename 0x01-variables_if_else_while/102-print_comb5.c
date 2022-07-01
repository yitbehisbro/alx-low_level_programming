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
	int c;
	int d;

	for (a = 0; a <= 9; a++)
	{
		for (b = a; b < 9; b++)
		{
			for (c = a; c < 10; c++)
			{
				for (d = c + 1; d < 10; d++)
				{
					putchar(a + '0');
					putchar(b + '0');
					putchar(' ');
					putchar(c + '0');
					putchar(d + '0');
					if ((b == 8) && (a == 9) && (c == 9) && (d == 9))
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	/* Return: Return 0 in success */
	return (0);
}
