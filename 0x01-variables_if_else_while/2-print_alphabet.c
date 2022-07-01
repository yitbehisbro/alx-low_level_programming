#include <stdio.h>

/**
 * main - prints character a to z
 *
 * Return: 0 in success
 *
 */
int main(void)
{
	int k;

	for(k = 'A'; k <= 'Z'; k++)
	{
		putchar(tolower(k));
	}
	return (0);
}
