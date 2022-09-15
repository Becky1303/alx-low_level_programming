#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 *
 * @n: is a variable
 *
 * Return: nothing
 */
void print_diagonal(int n)
{
	int l = 0;
	int spc;

	if (n > 0)
	{
		while (l < n)
		{
			for (spc = 0; spc < l; spc++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			l++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
