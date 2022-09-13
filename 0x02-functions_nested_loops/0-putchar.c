#include <stdio.h>
#include "main.h"

/**
* main - Entry point
*
* Description: This program prints _putchar,
* followed by a new line
*
* Return: 0 is success
*/
int main(void)
{
	char p[] = "_putchar";
	int y;

	for (y = 0; y < 8; y++)
	{
		_putchar(p[y]);
	}
	_putchar('\n');
	return (0);
}
