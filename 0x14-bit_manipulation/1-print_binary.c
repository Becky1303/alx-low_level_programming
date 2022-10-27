#include "main.h"

/**
* print_binary - prints binary numbers
* @j: decimal number
* Return: void
*/
void print_binary(unsigned long int j)
{
	unsigned int reducer = 32768, indicator = 0;

	if (j == 0)
	{
		_putchar('0');
		return;
	}
	while (reducer)
	{
		if (indicator == 1 && (j & reducer) == 0)
			_putchar('0');
		else if ((j & reducer) != 0)
		{
			_putchar('1');
			indicator = 1;
		}
		reducer >>= 1;
	}
}
