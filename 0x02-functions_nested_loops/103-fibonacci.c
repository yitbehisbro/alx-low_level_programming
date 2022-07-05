#include <stdio.h>

/**
 * main - prints the fibonaccie numbers
 *
 * Return: 0 in success
 *
 */
int main(void)
{
	long int fs, ifs, num1, num2;

	num1 = 1;
	num2 = 2;
	fs = ifs = 0;
	while (fs <= 4000000)
	{
		fs = num1 + num2;
		num1 = num2;
		num2 = fs;
		if ((num1 % 2) == 0)
		{
			ifs += num1;
		}
	}
	printf("%ld\n", ifs);
	return (0);
}
