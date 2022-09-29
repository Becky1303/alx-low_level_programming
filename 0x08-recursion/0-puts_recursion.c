#include "main.h"

/**
* _puts_recursion - prints a string, followed by a new line
* @s: string pointer
*
* Return: void
*/
void _puts_recursion(char *s)
{
	int x = 0, y = 0;

	if (s[x] == '\0' && s[x] == s[y])
	{
		_putchar('\n');
		return;
	}
	_putchar(s[y]);
	x++;
	_puts_recursion(&s[y + 1]);
}
