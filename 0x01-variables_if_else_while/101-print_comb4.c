/* Filename: 100-print_comb3.c AND Author: Yitbarek Wendimu */

#include <stdioj.h>

/**
 * main - Prints the three digits combination meaningfully
 *
 * Return: 0 in success
 *
 */
int main(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a <= 8; a++)
	{
		for (b = a + 1; b < 10; b++)
		{
			for (c = b + 1; c < 10; c++)
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(c + '0');
				if ((b == 8) && (a == 7) && (c == 9))
				continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	/* Return: Return 0 in success */
	return (0);
}
