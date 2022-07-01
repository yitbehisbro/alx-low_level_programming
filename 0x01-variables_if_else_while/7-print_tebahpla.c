#include <stdio.h>
#include <ctype.h>

/**
 * main - prints a to z in reverse
 *
 * Return: 0 in success
 *
 */
int main(void)
{
	char c;

	for (c = 'Z'; c >= 'A'; c--)
	{
		putchar(tolower(c));
	}
	putchar('\n');
	return (0);
}
