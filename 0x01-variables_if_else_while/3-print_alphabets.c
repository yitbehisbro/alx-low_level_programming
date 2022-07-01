#include <stdio.h>
#include <ctype.h>

/**
 * main - prints character a to z
 *
 * Return: 0 in success
 *
 */
int main(void)
{
	char k;

	for (k = 'A'; k <= 'Z'; k++)
	{
		putchar(tolower(k));
	}
	for (k = 'A'; k <= 'Z'; k++)
	{
		putchar(k);
	}
	putchar('\n');
	return (0);
}
