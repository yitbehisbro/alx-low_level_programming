#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments
 * of your program
 * @ac: count of argument
 * @av: argument vector
 * Return: Always 0.
 */
char *argstostr(int ac, char **av)
{
	char *argsv;
	int a, b, c, cnt;

	if (ac == 0)
		return ('\0');

	for (cnt = a = 0; a < ac; a++)
	{
		if (av[a] == NULL)
			return ('\0');

		for (b = 0; av[a][b] != '\0'; b++)
			cnt++;
		cnt++;
	}

	argsv = malloc((cnt + 1) * sizeof(char));

	if (argsv == NULL)
	{
		free(argsv);
		return ('\0');
	}

	for (a = b = c = 0; c < cnt; b++, c++)
	{
		if (av[a][b] == '\0')
		{
			argsv[c] = '\n';
			a++;
			c++;
			b = 0;
		}
		if (c < cnt - 1)
			argsv[c] = av[a][b];
	}
	argsv[c] = '\0';

	return (argsv);
}
