#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}



#include <stdio.h>

/**
 * main - prints number 1 through 100 with some words
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	i = 1;
	printf("%d", i);

	for (i = 2; i <= 100; i++)
	{
		if (((i % 3) == 0))
		{
			printf(" Fizz");
		}
		else if (((i % 5) == 0))
		{
			printf(" Buzz");
		}
		else if (((i % 5) == 0) && ((i % 3) == 0))
		{
			printf(" FizzBuzz");
		}
		else
		{
			printf(" %d", i);
		}
	}
	putchar('\n');
	return (0);
}
