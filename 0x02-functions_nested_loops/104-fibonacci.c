#include <stdio.h>

/**
 * main - prints fibonaccie numbers
 *
 * Return: 0 in success
 *
 */
int main(void)
{
	long int fs, fs2, num11, num22, num1, num2;
	int i, b, c;

	num1 = 1;
	num2 = 2;
	b =  c = 1;
	printf("%ld, %ld", num1, num2);
	for (i = 0; i < 96; i++)
	{
		if (b)
		{
			fs = num1 + num2;
			printf(", %ld", fs);
			num1 = num2;
			num2 = fs;
		}
		else
		{
			if (c)
			{
				num11 = num1 % 1000000000;
				num22 = num2 % 1000000000;
				num1 = num1 / 1000000000;
				num2 = num2 / 1000000000;
				c = 0;
			}
			fs2 = (num11 + num22);
			fs = num1 + num2 + (fs2 / 1000000000);
			printf(", %ld", fs);
			printf("%ld", fs2 % 1000000000);
			num1 = num2;
			num11 = num22;
			num2 = fs;
			num22 = (fs2 % 1000000000);
		}
		if (((num1 + num2) < 0) && b == 1)
			b = 0;
	}
	printf("\n");
	return (0);
}
