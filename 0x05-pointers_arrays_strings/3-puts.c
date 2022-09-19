#include "main.h"

/**
* _puts -  prints a string, followed by
* a new line, to stdout.
* @str: pointer
*
* Return: Void.
*/
void _puts(char *str)
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
		i++;
	}
	_putchar('\n');
}
