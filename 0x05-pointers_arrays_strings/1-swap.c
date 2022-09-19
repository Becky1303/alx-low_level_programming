#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @x: first int
 * @y: second int
 *
 * Return: void
 */
void swap_int(int *x, int *y)
{
	int z;

	z = *x;
	*x = *y;
	*y = z;
}
