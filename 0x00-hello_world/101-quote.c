/* Prints the text */
{ #include <stdio.h>

/**
 * main - prints the text to the console
 *
 * Return: 1 in success
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 61);

	/* Return: 1 for error message */
	return (1);
}
}
