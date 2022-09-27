#include "main.h"
#include <stdio.h>

/**
* print_diagsums - prints the sum of the 2 diagonals
* of a square matrix of integers
* @a: 2D array of integers
* @size: size of the array
* Return: void
*/

void print_diagsums(int *a, int size)
{
	int x, tot, t;

	x = 0;
	tot = 0;
	t = size * size;
	while (x < t)
	{
		if (x % (size + 1) == 0)
			tot += a[x];
		x++;
	}
	printf("%d, ", tot);

	tot = 0;
	x = 0;
	while (x < t)
	{
		if (x % (size - 1) == 0 && x != (t - 1) && x != 0)
			tot += a[x];
		x++;
	}
	printf("%d\n", tot);
}
