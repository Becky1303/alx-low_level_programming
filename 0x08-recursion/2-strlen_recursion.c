#include "main.h"
#include <stdio.h>

/**
* _strlen_recursion - returns the length of a string
* @s: string pointer
*
* Return: int
*/
int _strlen_recursion(char *s)
{
	int x = 0;

	if (*s != '\0')
	{
		x = 1 + _strlen_recursion(s + 1);
	}
	else if (*(s + 1) == '\0')
		x += 0;
	return (x);
}
