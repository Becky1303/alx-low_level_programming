#include "main.h"

/**
* print_alphabet - prints the alphabet, in lowercase,
* followed by a new line
*
* Description: prints the alphabet, in lowercase,
* followed by a new line
*
* Return: void
*/
void print_alphabet(void)
{
	char t;
	t = 'a';
	while (t <= 'z')
	{
		_putchar(t);
		t++;
	}
	_putchar('\n');
}
