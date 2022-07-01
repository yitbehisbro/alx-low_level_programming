#include <stdio.h>

/**
 * main - prints character a to z
 *
 * Return: 0 in success
 *
 */
int main(void)
{
	for(int k = 'A'; k <= 'Z'; k++)
	{
		lowerCase = tolower(k);
		putchar(lowerCase);
	}
	return (0);
}
