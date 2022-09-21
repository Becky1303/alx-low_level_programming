#include "main.h"

/**
* print_number -  prints an integer
*
* @n: variable
*
* Return: void
*/

void print_number(int n)
{
	int divisor, s;

	divisor = 1000000000;
	s = 1;
	if (n > 0)
	{
		n = n * -1;
		s = s * -1;
	}
	if (n != 0)
	{
		while (n / divisor == 0)
			divisor /= 10;
		if (s == 1)
			_putchar('-');
		while (divisor >= 1)
		{
			_putchar(-(n / divisor) + '0');
			n = n % divisor;
			divisor /= 10;
		}
	}
	else
		_putchar('0');
}
