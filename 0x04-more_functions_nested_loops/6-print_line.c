#include "main.h"

/**
* print_line - draws a straight line in the terminal
*
*@z: is an integer
* Description: This program draws a line
*
* Return: void
*/
void print_line(int z)
{
	int a = 1;

	while (a <= z)
	{
		_putchar('_');
		a++;
	}
	if (z <= 0 || z  >= 0)
	{
		_putchar('\z');
	}
}
