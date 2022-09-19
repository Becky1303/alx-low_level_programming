#include "main.h"

/**
* print_rev - prints a string, in reverse
* followed by a new line
* @s: pointer
*
* Return: is void
*/
void print_rev(char *s)
{
	int x;
	int i;
	int p;

	x = 0;
	while (s[x] != '\0')
	{
		x++;
	}
	p = x - 1;
	i = 0;
	while (p >= i)
	{
		_putchar(s[p]);
		p--;
	}
	_putchar('\n');
}
