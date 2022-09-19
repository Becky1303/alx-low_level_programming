#include "main.h"

/**
 * puts_half -  prints half of a string
 * followed by a new line.
 * @str: pointer
 *
 * Return: void
 */
void puts_half(char *str)
{
	int t;
	int p;
	int x;
	int r;

	t = 0;
	while (str[t] != '\0')
	{
		t++;
	}
	r = t;
	p = r;
	x = p / 2;

	if (p % 2 == 0)
	{
		while (x < p)
		{
			_putchar(str[x]);
			x++;
		}
	}
	else if (p % 2 != 0)
	{
		x = ((p + 1) / 2);
		while (x < p)
		{
			_putchar(str[x]);
			x++;
		}
	}
	_putchar('\n');
}
