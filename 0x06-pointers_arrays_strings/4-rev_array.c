#include "main.h"

/**
 * reverse_array - reverses the content of array of integers
 *
 * @a: pointer
 * @n: number of elements in the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int z, j, y, mid;

	mid = n / 2;
	j = n - 1;
	for (z = 0; z <= mid; z++)
	{
		if (z < mid)
		{
			y = a[z];
			a[z] = a[j];
			a[j] = y;
		}
		else if (z == mid)
			a[z] = a[z];
		j--;
	}
}
