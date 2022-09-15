#include "main.h"

/**
* print_numbers - prints the numbers, from 0 to 9
*				  followed by a new line
*
* Description: It prints numbers 0 to 9
* 
*
* Return: 0
*/
void print_numbers(void)
{
	int t;

	for (t = '0'; t <= '9'; t++)
	{
		_putchar(t);
	}
	_putchar('\n');
}
