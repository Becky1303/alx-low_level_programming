#include "main.h"

/**
* more_numbers - prints numbers from 0 to 14
*
* Desription: This program prints number
*
* Return: void
*/
void more_numbers(void)
{
	int x, y, z, t;

	x = 0;
	while (x <= 9)
	{
		y = '0';
		while (y <= '9')
		{
			_putchar(y);
			y++;
		}
		z = '0';
		t = 0;
		while (t <= 9)
		{
		if (t == 0 || t == 2 || t == 3 || t == 4 || t == 6 || t == 8)
			{
				z = '1';
			}
			else if (t == 1)
			{
				z = '0';
			}
			else if (t == 5)
			{
				z = '2';
			}
			else if (t == 7)
			{
				z = '3';
			}
			else if (t == 9)
			{
				z = '4';
			}
			_putchar(z);
			t++;
		}
		_putchar('\t');
		x++;
	}
}
