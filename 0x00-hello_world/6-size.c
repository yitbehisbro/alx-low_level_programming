/* Size of data types on 32 and 64 bit machine */

#include <stdio.h>

/**
 * main - prints size of diffrent datatypes
 *
 * Return: 0 in success
 *
 */
int main(void)
{
	char charType;
	int intType;
	long int longInt;
	long long int long2Int;
	float floatType;

	/* Prints size of data types */
	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of an int: %zu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longInt));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long2Int));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatType));

	/* Return: 0 in success */
	return (0);
}
