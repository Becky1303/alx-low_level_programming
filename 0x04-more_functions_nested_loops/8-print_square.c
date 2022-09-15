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
	int a;
	int b;

	if (size <= 0)
		_putchar('\n');
	b = 0;
	while (b < size)
	{
		a = 0;
		while (a < size)
		{
			_putchar('#');
			_putchar('\n');
			a++;
		}
		b++;
	}
}
