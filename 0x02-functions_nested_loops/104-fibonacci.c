#include <stdio.h>

/**
 * main - prints fibonaccie numbers
 *
 * Return: 0 in success
 *
 */
int main(void)
{
	int i, bool1, bool2;
	long int fs, fs2, _num1, _num2, num1, num2;

	num1 = 1;
	num2 = 2;
	bool1 =  bool2 = 1;
	printf("%ld, %ld", num1, num2);
	for (i = 0; i < 96; i++)
	{
		if (bool1)
		{
			fs = num1 + num2;
			printf(", %ld", fs);
			num1 = num2;
			num2 = fs;
		}
		else
		{
			if (bool2)
			{
				_num1 = num1 % 1000000000;
				_num2 = _num2 % 1000000000;
				num1 = num1 / 1000000000;
				num2 = num2 / 1000000000;
				bool2 = 0;
			}
			fs2 = (_num1 + _num2);
			fs = num1 + num2 + (fs2 / 1000000000);
			printf(", %ld", fs);
			printf("%ld", fs2 % 1000000000);
			num1 = num2;
			_num1 = _num2;
			num2 = fs;
			_num2 = (fs2 % 1000000000);
		}
		if (((num1 + num2) < 0) && bool1 == 1)
			bool1 = 0;
	}
	printf("\n");
	return (0);
}
