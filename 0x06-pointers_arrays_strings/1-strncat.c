#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: destination string
 * @src: target string
 * @n: n bytes of src
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	for (x = 0; dest[x] != '\0'; x++)
	y = 0;
	while (y < n)
	{
		dest[x] = src[y];
		y++;
		x++;
	}
	return (dest);
	_putchar('\n');
}
