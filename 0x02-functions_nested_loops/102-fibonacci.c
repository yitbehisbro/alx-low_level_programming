#include <stdio.h>

/**
 * main - prints 50 fibonacci series
 *
 * Return: 0 in success
 *
 */
int main(void)
{
	int i;
	long int num1, num2, fs;

	num1 = 1;
	num2 = 2;
	printf("%ld, %ld", num1, num2);
	for (i = 0; i < 48; i++)
	{
		fs = num1 + num2;
		printf(", %ld", fs);
		num1 = num2;
		num2 = fs;
	}
	printf("\n");
	return (0);
}
