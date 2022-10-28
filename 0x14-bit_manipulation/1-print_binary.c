#include "main.h"

/**
* print_binary - prints binary numbers
* @j: decimal number
* Return: void
*/
void print_binary(unsigned long int j)
{
	if (j > 1)
		print_binary(j >> 1);

	_putchar((j & 1) + '0');
}
