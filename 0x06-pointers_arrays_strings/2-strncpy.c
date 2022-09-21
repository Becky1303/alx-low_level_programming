#include "main.h"
#include <string.h>

/**
* _strncpy - copies a string
* @dest: destination string
* @src: target string
* @n: n bytes of src
*
* Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int x, y;

	x = 0;
	while (src[x] != '\0' && x < n)
	{
		dest[x] = src[x];
		x++;
	}
	for (y = x; y < n; y++)
		dest[y] = '\0';
	return (dest);
	_putchar('\n');
}
