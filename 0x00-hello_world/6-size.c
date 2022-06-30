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
	/**
	 * char charType;
	 * int intType;
	 * long int longInt;
	 * long long int long2Int;
	 * float floatType;
	 */

	/* Prints size of data types */
	printf("Size of a char: %zu bytes\n", sizeof(char*));
	printf("Size of an int: %zu bytes\n", sizeof(int*));
	printf("Size of a long int: %zu bytes\n", sizeof(long int*));
	printf("Size of a long long int: %zu bytes\n", sizeof(long long int*));
	printf("Size of a float: %zu bytes\n", sizeof(float*));

	/* Return: 0 in success */
	return (0);
}
