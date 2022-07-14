#include "main.h"

/**
 * infinite_add - adds long integers
 * @n1: integer value 1
 * @n2: integer value 2
 * @r: is the buffer that the function will use to store the result
 * @size_r: is the buffer size
 * Return: Always 0.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a1, a2, opr, d, s1, s2, sum;
	
	a1 = 0;
	a2 = 0;
	sum = 0;

	while (*(n1 + a1) != '\0')
		a1++;

	while (*(n2 + a2) != '\0')
		a2++;

	if (a1 >= a2)
		d = a1;
	else
		d = a2;

	if (size_r <= d + 1)
		return (0);

	r[d + 1] = '\0';
	a1--, a2--, size_r--;
	s1 = *(n1 + a1) - 48, s2 = *(n2 + a2) - 48;

	while (d >= 0)
	{
		opr = s1 + s2 + sum;
		if (opr >= 10)
			sum = opr / 10;
		else
			sum = 0;
		if (opr > 0)
		*(r + d) = (opr % 10) + 48;
		else
			*(r + d) = '0';
		if (a1 > 0)
			a1--, s1 = *(n1 + a1) - 48;
		else
			s1 = 0;
		if (a2 > 0)
			a2--, s2 = *(n2 + a2) - 48;
		else
			s2 = 0;
		d--, size_r--;
	}
	if (*(r) != '0')
		return (r);
	else
		return (r + 1);
}
