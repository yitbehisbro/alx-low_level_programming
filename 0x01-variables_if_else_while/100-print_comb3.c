/* Filename: 100-print_comb3.c AND Author: Yitbarek Wendimu */
#include <stdio.h>

/**
 * main: Prints the two digits combination meaningfully
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
		for (b = a + 1; b < 10; b++)
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

	/* Return: Return 0 in success */
	return (0);
}
