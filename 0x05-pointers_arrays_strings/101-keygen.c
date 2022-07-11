#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords 
 *
 * Return: 0 Always.
 */
int main(void)
{
	time_t t;
	int crack, random;

	crack = 0;
	random = 0;

	srand((unsigned int) time(&t));

	while (crack < 2772)
	{
		random = rand() % 128;

		if ((crack + random) > 2772)
			break;

		crack += random;
		printf("%c", random);
	}
	printf("%c\n", (2772 - crack));
	return (0);
}
