#include <stdio.h>

/**
 * main - prints 0 to 9 using putchar function
 *
 * Return: 0 in success
 *
 */
int main(void)
{
	int k;

	for (k = 0; k < 10; k++)
	{
		putchar(k + '0');
	}
	putchar('\n');
	return (0);
}
