#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: pointer to the string
 *
 * Return: char
 */
char *leet(char *s)
{
	char x[] = "AaEeOoTtLl";
	char y[] = "4433007711";
	int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; (x[b] != '\0' && y[b] != '\0'); b++)
		{
			if (s[a] == x[b])
				s[a] = y[b];
		}
	}
	return (s);
	_putchar('\n');
}
