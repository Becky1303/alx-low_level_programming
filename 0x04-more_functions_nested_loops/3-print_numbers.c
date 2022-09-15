#include "main.h"

/**
* print_numbers - prints numbers 0 t0 9
*
* Description: This prints numbers using
* _putchar function
*
* Return: void, nothing
*/
void print_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
