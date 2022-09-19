#include "main.h"

/**
* puts2 - prints every other character of a string
* starting with the first character
*
* @str: pointer
*
* Return: void
*/

void puts2(char *str)
{
	int x;
	int i;
	int p;

	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	p = x;
	i = 0;
	while (i < p)
	{
		_putchar(str[i]);
		i += 2;

	}
	_putchar('\n');
}
