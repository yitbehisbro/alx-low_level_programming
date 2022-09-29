#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * biggest - finds the largest number
 * @username: username
 * @size: size of username
 *
 * Return: the largest number
 */
int biggest(char *username, int size)
{
	int ch = *username;
	int vch = 0;
	unsigned int rand_num;

	for (; vch < size; vch++)
		if (ch < username[vch])
			ch = username[vch];
	srand(ch ^ 14);
	rand_num = rand();
	return (rand_num & 63);
}

/**
 * mult_username - multiplies each char of username
 * @username: username
 * @size: size of username
 *
 * Return: product of char
 */
int mult_username(char *username, int size)
{
	int ch = 0, vch = 0;

	for (; vch < size; vch++)
		ch = ch + username[vch] * username[vch];
	return (((unsigned int)ch ^ 239) & 63);
}

/**
 * random_char - creates a random char
 * @username: username
 *
 * Return: random characters
 */
int random_char(char *username)
{
	int ch = 0, vch = 0;

	for (; vch < *username; vch++)
		ch = rand();
	return (((unsigned int)ch ^ 229) & 63);
}

/**
 * main - Entry point
 * @argc: count
 * @argv: vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	char crack[7];
	int size = 0, ch, vch;
	long letters[] = {
		0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
		0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
		0x723161513346655a, 0x6b756f494b646850 };
	(void) argc;

	while (argv[1][size])
		size++;

	crack[0] = ((char *)letters)[(size ^ 59) & 63];
	for (ch = 0, vch = 0; vch < size; vch++)
		ch += argv[1][vch];

	crack[1] = ((char *)letters)[(ch ^ 79) & 63];
	for (ch = 1, vch = 0; vch < size; vch++)
		ch *= argv[1][vch];

	crack[2] = ((char *)letters)[(ch ^ 85) & 63];
	crack[3] = ((char *)letters)[biggest(argv[1], size)];
	crack[4] = ((char *)letters)[mult_username(argv[1], size)];
	crack[5] = ((char *)letters)[random_char(argv[1])];
	crack[6] = '\0';
	for (ch = 0; crack[ch]; ch++)
		printf("%c", crack[ch]);
	return (0);
}
