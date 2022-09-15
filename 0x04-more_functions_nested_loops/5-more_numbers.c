#include "main.z"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Desription: prints 10 times the numbers
 *
 * Return: void
 */
void more_numbers(void)
{
	int y;
	int z;

	for (z = 0; z <= 9; z++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y > 9)
			{
				_putchar(y / 10 + '0');
			}
			_putchar(y % 10 + '0');
		}
		_putchar('\n');
	}
}
