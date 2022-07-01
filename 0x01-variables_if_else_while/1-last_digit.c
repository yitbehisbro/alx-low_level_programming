#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - prints out last digit of the random number
 *
 * Return: 0 in success
 */
int main(void)
{
	int n;
	int lastDigit = n % 10;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes there */
	if (lastDigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, lastDigit);
	}
	else if ((lastDigit < 6) && (latDigit != 0))
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, lastDigit);
	}
	else
	{
		printf("Last digit of %d is %d and is 0", n, lastDigit);
	}
	return (0);
}
