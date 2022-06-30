/* Size of data types */

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
	printf("Size of a char: %zu bytes\n", sizeof($charType));
	printf("Size of an int: %zu bytes\n", sizeof($intType));
	printf("Size of a long int: %zu bytes\n", sizeof($longInt));
	printf("Size of a long long int: %zu bytes\n", sizeof($long2Int));
	printf("Size of a float: %zu bytes\n", sizeof($floatType));

	/* Return: 0 in success */
	return (0);
}
