#include <stdio.h>

/**
 * main - prints largest prime factor for 612852475143
 *
 * Return: 0 in success
 *
 */
int main(void)
{
	long int pf, l;

	l = 612852475143;
	for (pf = 2; pf <= l; pf++)
	{
		if (l % pf == 0)
		{
			l /= pf;
			pf--;
		}
	}
	printf("%ld\n", pf);
	return (0);
}
