#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * to the buffer pointed to by dest
 * @dest: first string
 * @src: second string
 *
 * Return: string of characters
 */
char *_strcpy(char *dest, char *src)
{
	int k;

	k = 0;
	while (src[k] != '\0')
	{
		dest[k] = src[k];
		k++;
	}
	dest[k] = '\0';

	return (dest);
}
