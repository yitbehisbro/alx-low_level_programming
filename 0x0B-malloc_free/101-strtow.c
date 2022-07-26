#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _freeup - frees a 2d array
 * @grid: 2d array of a char
 * @height: column of the array
 * Return: no return for void
 */
void _freeup(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}

/**
 * strtow - Splits the string to word
 * @str: string value
 *
 * Return: NULL if str == NULL or ""
 */
char **strtow(char *str)
{
	char **mystr;
	unsigned int c, height, a, b, d;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			height++;
	mystr = malloc((height + 1) * sizeof(char *));
	if (mystr == NULL || height == 0)
	{
		free(mystr);
		return (NULL);
	}
	for (a = d = 0; a < height; a++)
	{
		for (c = d; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				d++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				mystr[a] = malloc((c - d + 2) * sizeof(char));
				if (mystr[a] == NULL)
				{
					_freeup(mystr, a);
					return (NULL);
				}
				break;
			}
		}
		for (b = 0; d <= c; d++, b++)
			mystr[a][b] = str[d];
		mystr[a][b] = '\0';
	}
	mystr[a] = NULL;
	return (mystr);
}
