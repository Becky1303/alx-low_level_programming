#include "main.h"

/**
* print_square - prints a square
*	             followed by a new line
* @size: is a variable
*
* Return: void
*/
void print_square(int size)
{
	int x;
	int y;

	if (size <= 0)
		_putchar('\n');
	y = 0;
	while (y < size)
	{
		x = 0;
		while (x < size)
		{
			_putchar('#');
			_putchar('\n');
			x++;
		}
		y++;
	}
}
