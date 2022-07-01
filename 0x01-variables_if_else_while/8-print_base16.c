#include <stdio.h>

/**
 * main - prints base 16 numbers
 *
 * Return: 0 in success
 *
 */
int main(void)
{
	int digit;
	char chars;

	for (digit = 0; digit < 10; digit++)
	{
		putchar((digit % 10) + '0');
	}
	for (chars = 'a'; chars <= 'f'; chars++)
	{
		putchar(chars);
	}
	putchar('\n');
	return (0);
}
