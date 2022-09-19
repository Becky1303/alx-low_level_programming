#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of array of int
 * @a: an array of integers
 * @n: integer
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;
	int t;

	t = 1;
	i = 0;
	if (n <= 0)
		printf("\n");
	else if (n > 0)
	{
		while (a[i] != '\0' && t < n)
		{
			printf("%d, ", a[i]);
			i++;
			t++;
		}
		printf("%d\n", a[i]);
	}
}
