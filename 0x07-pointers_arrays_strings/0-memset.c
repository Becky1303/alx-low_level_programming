#include "main.h"

/**
* _memset - fills memory with a constant byte
*  @b: character
*  @s: pointer
*  @n: integer
*
*  Return: a character
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int z;

	for (z = 0; z < n; z++)
	{
		s[z] = b;
	}
	return (s);
}
