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
	int z;

	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		for (x = 0; x < size; x++)
		{
			for (z = 0; z < size; z++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
