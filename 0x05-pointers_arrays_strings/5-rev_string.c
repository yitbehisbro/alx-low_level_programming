#include "main.h"

/**
 * rev_string - reverses the string
 * @s: char variable that holds string value to be print in reverse
 * Return: Always 0.
 */
void rev_string(char *s)
{
	char *myStr;
	char myLog;
	int length, a, b;

	length = 0;

	while (length >= 0)
	{
		if (s[length] == '\0')
			break;
		length++;
	}
	myStr = s;

	for (a = 0; a < (length - 1); a++)
	{
		for (b = a + 1; b > 0; b--)
		{
			myLog = *(myStr + b);
			*(myStr + b) = *(myStr + (b - 1));
			*(myStr + (b - 1)) = myLog;
		}
	}
}
