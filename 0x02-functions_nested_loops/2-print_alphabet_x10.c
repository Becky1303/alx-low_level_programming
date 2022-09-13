#include "main.h"

/**
* print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
* followed by a new line
*
* Description: prints 10 times the alphabet, in lowercase
* 
*
* Return: void
*/
void print_alphabet_x10(void)
{
	int r;
	int h;

	r = 1;
	while (r < 11)
	{
		h = 'a';
		while (h <= 'z')
		{
			_putchar(b);
			h++;
		}
		_putchar('\n');
		r++;
	}
}
