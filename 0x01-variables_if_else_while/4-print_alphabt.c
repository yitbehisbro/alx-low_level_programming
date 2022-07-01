#include <stdio.h>
#include <ctype.h>

/**
 * main - prints character by ignoring q and e
 *
 * Return: 0 in success
 *
 */
int main(void)
{
	char k;

	for (k = 'A'; k <= 'Z'; k++)
	{
		if (tolower(k) == 'q')
		continue;
		if (tolower(k) == 'e')
		continue;
		putchar(tolower(k));
	}
	putchar('\n');
	return (0);
}
