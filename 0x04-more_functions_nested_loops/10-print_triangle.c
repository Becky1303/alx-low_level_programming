#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 *
 * @size: size of the triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int l = 0;
	int space;
	int p;

	if (size > 0)
	{
		while (l < size)
		{
			for (space = size - 1; space > l; space--)
			{
				_putchar(' ');
			}
			for (p = 0; p < l + 1; p++)
			{
				_putchar('#');
			}
			_putchar('\n');
			l++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
