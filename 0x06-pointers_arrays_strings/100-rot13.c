#include "main.h"

/**
* rot13 -  encodes a string using rot13
* @s: pointer
*
* Return: a char
*/
char *rot13(char *s)
{
	char x[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char y[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; (x[b] != '\0' && y[b] != '\0'); b++)
		{
			if (x[b] == s[a])
			{
				s[a] = y[b];
				break;
			}
		}
	}
	return (s);
	_putchar('\n');
}
