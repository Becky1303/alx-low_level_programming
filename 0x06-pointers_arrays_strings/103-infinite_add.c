#include "main.h"
#include <stdio.h>

/**
 * _strlen - gets the length of a string
 * @s: the string variable
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int z = 0;

	while (*s++)
		z++;
	return (z);
}

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 * Return: void
 */
char *rev_string(char *s)
{
	int l = _strlen(s), i = 0;
	char u;

	for (i = 0; i < l / 2; i++)
	{
		u = s[l - i - 1];
		s[l - i - 1] = s[i];
		s[i] = u;
	}
	return (s);
}

/**
 * infinite_add - adds long string of digits
 * @n1: first string
 * @n2: second string
 * @r: result buffer
 * @size_r: size of result buffer
 *
 * Return: char pointer to buffer
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int l1 = _strlen(n1), l2 = _strlen(n2), i = 0, a, b, c = 0;

	for (l1--, l2--, size_r--; l1 >= 0 || l2 >= 0 || c; l1--, l2--, i++)
	{
		if (i >= size_r)
			return (0);
		a = 0;
		b = 0;
		if (l1 >= 0)
			a = n1[l1] - '0';
		if (l2 >= 0)
			b = n2[l2] - '0';
		a = a + b + c;
		c = a / 10;
		a %= 10;
		r[i] = a + '0';
	}
	r[i] = '\0';
	return (rev_string(r));
}
